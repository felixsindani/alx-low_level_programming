#!bin/bash
gcc -c -wall -Werror -Wextra _pedantic -std=gnu89 -fpic *.c
gcc -shared -o liball *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
