# 0x02-functions_nested_loops
Contains files showing nested loops and use of functions i.e declaration and use from local header files.

# Requirements
- Used editor: *vi*
- All your files will be compiled on **Ubuntu 20.04 LTS** using **gcc**, using the options *-Wall -Werror -Wextra -pedantic -std=gnu89*
- All files should end with a new line
- A README.md file, at the root of the folder of this project, containing a description of the project
- Code should use the Betty style. It will be checked using *betty-style.pl* and *betty-doc.pl*
- Not global variables are used
- No more than 5 functions per file
- Standard library are not used. Any use of functions like *printf, puts, etc…* is forbidden
- The prototypes of all functions and the prototype of the function _putchar are included in the header file called main.h

# Files
## 0-putchar.c
Prints *_putchar* followed by a new line

## 1-alphabet.c
Function that prints the alphabet, in lowercase, followed by a new line. Prototype: void print_alphabet(void);<ul><li>You can only use _putchar twice in your code</li></ul>

## 2-print_alphabet_x10.c
Function that prints 10 times the alphabet, in lowercase, followed by a new line. Prototype: void print_alphabet_x10(void);<ul><li>You can only use _putchar twice in your code</li></ul>

## 3-islower.c
Function that checks for lowercase character. Prototype: int _islower(int c);<ul><li>Returns 1 if c is lowercase</li><li>Returns 0 otherwise</li></ul>

## 4-isalpha.c
Function that checks for alphabetic character. Prototype: int _isalpha(int c);<ul><li>Returns 1 if c is a letter, lowercase or uppercase</li><li>Returns 0 otherwise</li></ul>

## 5-sign.c
Function that prints the sign of a number. Prototype: int print_sign(int n);<ul><li>Returns 1 and prints + if n is greater than zero</li><li>Returns 0 and prints 0 if n is zero</li><li>Returns -1 and prints - if n is less than zero</li></ul>

## 6-abs.c
Function that computes the absolute value of an integer. Prototype: int _abs(int);

## 7-print_last_digit.c
Function that prints the last digit of a number. Prototype: int print_last_digit(int);<ul><li>Returns the value of the last digit</li></ul>

## 8-24_hours.c
Function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. Prototype: void jack_bauer(void);

## 9-times_table.c
Function that prints the 9 times table, starting with 0. Prototype: void times_table(void);

## 10-add.c
Function that adds two integers and returns result. Prototype: int add(int, int);

## 11-print_to_98.c
Function that prints all natural numbers from n to 98, followed by a new line. Prototype: void print_to_98(int n);<ul><li>Numbers must be separated by a comma, followed by a space</li><li>Numbers should be printed in order</li><li>The first printed number should be the number passed to your function</li><li>The last printed number should be *98*</li></ul>

## 100-times_table.c
Function that prints the n times table, starting with 0. Prototype: void print_times_table(int n);<ul><li>If n is greater than 15 or less than 0 the function should not print anything</li></ul>

## 101-natural.c
Program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line

## 102-fibonacci.c
Program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line

## 103-fibonacci.c
program that finds and prints the sum of the even valued terms in a Fibonacci sequence, starting with 1 and 2, whose values do not exceed 4000000

## 104-fibonacci.c
Program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line
