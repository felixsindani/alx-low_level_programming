#include "main.h"

/**
 * verify_if_elf - Checks if file is ELF
 * @elf_array: array of ELF numbers.
 * Description: not an ELF file, exit with code 98.
 */
void verify_if_elf(unsigned char *elf_array)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (elf_array[index] != 127 &&
		    elf_array[index] != 'E' &&
		    elf_array[index] != 'L' &&
		    elf_array[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - handles magic numbers of ELF header.
 * @elf_numbers: array of ELF magic numbers.
 * Description: Magic numbers are separated by space
 */
void print_magic_numbers(unsigned char *elf_numbers)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", elf_numbers[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - it Prints class of ELF header.
 * @elf_array: array containing ELF class.
 */
void print_elf_class(unsigned char *elf_array)
{
	printf("  Class:                             ");

	switch (elf_array[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_array[EI_CLASS]);
	}
}

/**
 * print_elf_data - it Prints data of ELF header.
 * @elf_array:  array containing ELF class.
 */
void print_elf_data(unsigned char *elf_array)
{
	printf("  Data:                              ");

	switch (elf_array[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_array[EI_CLASS]);
	}
}

/**
 * print_elf_version - it Prints version of ELF header.
 * @elf_array: array containing the ELF version.
 */
void print_elf_version(unsigned char *elf_array)
{
	printf("  Version:                           %d",
	       elf_array[EI_VERSION]);

	switch (elf_array[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_elf_osabi - it Prints OS/ABI of ELF header.
 * @elf_array: array containing ELF version.
 */
void print_elf_osabi(unsigned char *elf_array)
{
	printf("  OS/ABI:                            ");

	switch (elf_array[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_array[EI_OSABI]);
	}
}

/**
 * print_elf_abi - it Prints ABI version of ELF header.
 * @elf_array: array containing the ELF ABI version.
 */
void print_elf_abi(unsigned char *elf_array)
{
	printf("  ABI Version:                       %d\n",
	       elf_array[EI_ABIVERSION]);
}

/**
 * print_elf_type - it Prints the type of an ELF header.
 * @elf_type: ELF type.
 * @elf_array: array containing the ELF class.
 */
void print_elf_type(unsigned int elf_type, unsigned char *elf_array)
{
	if (elf_array[EI_DATA] == ELFDATA2MSB)
		elf_type >>= 8;

	printf("  Type:                              ");

	switch (elf_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", elf_type);
	}
}

/**
 * print_elf_entry - it Prints entry point of an ELF header.
 * @elf_entry_point: ELF entry point address.
 * @elf_array: array containing the ELF class.
 */
void print_entry_point(unsigned long int elf_entry_point, unsigned char *elf_array)
{
	printf("  Entry point address:               ");

	if (elf_array[EI_DATA] == ELFDATA2MSB)
	{
		elf_entry_point = ((elf_entry_point << 8) & 0xFF00FF00) |
			  ((elf_entry_point >> 8) & 0xFF00FF);
		elf_entry_point = (elf_entry_point << 16) | (elf_entry_point >> 16);
	}

	if (elf_array[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)elf_entry_point);

	else
		printf("%#lx\n", elf_entry_point);
}

/**
 * close_elf_file - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed - exit code 98.
 */
void close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - shows information in ELF header at the start of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array vector.
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int a, b;

	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	b = read(a, header, sizeof(Elf64_Ehdr));
	if (b == -1)
	{
		free(header);
		close_elf(a);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	verify_if_elf(header->elf_array);
	printf("ELF Header:\n");
	print_magic_numbers(header->elf_array);
	print_elf_class(header->elf_array);
	print_elf_data(header->elf_array);
	print_elf_version(header->elf_array);
	print_elf_osabi(header->elf_array);
	print_elf_abi(header->elf_array);
	print_elf_type(header->elf_type, header->elf_array);
	print_entry_point(header->elf_entry_point, header->elf_array);

	free(header);
	close_elf_file(a);
	return (0);
}
