# Hello World
Contains the first C program on the ALX Software engineering programme


# Requirements
## C files
- Used editor: *vi*
- All your files will be compiled on **Ubuntu 20.04 LTS** using **gcc**, using the options *-Wall -Werror -Wextra -pedantic -std=gnu89*
- All your files should end with a new line
- A *README.md* file at the root of the repo, containing a description of the repository
- A README.md file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use *system*
- Your code should use the *Betty* style. It will be checked using *betty-style.pl* and *betty-doc.pl*

## Shell scripts
- Used editor: *vi*
- All your scripts will be tested on **Ubuntu 20.04 LTS**
- All your scripts should be exactly two lines long *($ wc -l file should print 2)*
- All your files should end with a new line
- The first line of all your files should be exactly *#!/bin/bash*


# Files

| File name | Description |
| --------- | ----------- |
| 0-preprocessor | Runs a C file through the preprocessor and save the result into another file<ul><li>The C file name will be saved in the variable *$CFILE*</li><li>The output should be saved in the file *c*</li></ul> |
| 1-compiler | Generates the assembly code of a C code and save it in an output file<ul><li>The C file name will be saved in the variable *$CFILE*</li><li>The output should be named the same as the C file, but with the extension *.o* instead of *.c*</li></ul> |
| 2-assembler | Generates the assembly code of a C code and save it in an output file<ul><li>The C file name will be saved in the variable *$CFILE*</li><li>The output should be named the same as the C file, but with the extension *.s* instead of *.c*</li></ul> |
| 3-name | Compiles a C file and creates an executable named *cisfun*<ul><li>The C file name will be saved in the variable *$CFILE*</li></ul> |
| 4-puts.c | C program that prints exactly **"Programming is like building a multilingual puzzle,** followed by a new line<ul><li>Use the function puts</li><li>You are not allowed to use printf</li><li>Your program should end with the value 0</li></ul> |
| 5-printf.c |  C program that prints exactly **with proper grammar, but the outcome is a piece of art,**, followed by a new line<ul><li>Use the function printf</li><li>You are not allowed to use the function puts</li><li>Your program should return 0</li><li>Your program should compile without warning when using the -Wall gcc option</li></ul> |
| 6-size.c | C program that prints the size of various types on the computer it is compiled and run on |
| 100-intel | Generates the assembly code of a C code and save it in an output file<ul><li>The C file name will be saved in the variable *$CFILE*</li><li>The output should be named the same as the C file, but with the extension *.s* instead of *.c*</li></ul> |
| 101-quote.c | C program that prints exactly **and that piece of art is useful" - Dora Korpar, 2015-10-19**, followed by a new line, to the standard error<ul><li>You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts</li><li>Your program should return 1</li><li>Your program should compile without any warnings when using the -Wall gcc option</li></ul> |
