#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <elf.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);

void verify_if_elf(unsigned char *e_ident);
void print_magic_numbers(unsigned char *elf_numbers);
void print_elf_class(unsigned char *e_ident);
void print_elf_data(unsigned char *e_ident);
void print_elf_version(unsigned char *e_ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_abi(unsigned char *e_ident);
void print_e_type(unsigned int e_type, unsigned char *e_ident);
void print_entry_point(unsigned long int elf_entry_point, unsigned char *e_ident);
void close_elf_file(int elf);

#endif
