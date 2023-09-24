# 0x04. C - More functions, more nested loops
Deeper dive into functions, prototypes, declaration, calling, local variables, calling by refference and all that stuff partaining Functions and Nested loops

# Resources
* [Nested while loops](https://intranet.alxswe.com/rltoken/aDRkFzUkVysnD94Dpm3w5g)
* [C - Functions](https://intranet.alxswe.com/rltoken/zf4IZeoe0yFZL2X7_nznQQ)
* [Learning to Program in C (Part 06)](https://intranet.alxswe.com/rltoken/iQ87CI4Lf41U_uRh9QsoQA) (stop at 14:00)
* [What is the purpose of a function prototype?] (https://intranet.alxswe.com/rltoken/pUXhvD6-xl5BbWyj1AhCEA)
* [C - Header Files](https://intranet.alxswe.com/rltoken/IFY075ffrszSJvHqPAa-zQ) (stop before the “Once-Only Headers” paragraph)

# General
* Used editor *vi*
* All files compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
* All your files end with a new line
* A *README.md* file, at the root of the folder of the project is mandatory
* Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
* You are not allowed to use global variables
* No more than 5 functions per file
* You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
* You are allowed to use `_putchar`
* The prototypes of all your functions and the prototype of the function _putchar are included in your header file called main.h

# Files
### main.h
Header file

### 0-isupper.c
Function that checks for uppercase character
<ul><li>Prototype: `int _isupper(int c);`</li><li>Returns 1 if c is uppercase</li><li>Returns 0 otherwise</li></ul>

### 1-isdigit.c
Function that checks for a digit (0 through 9)<ul><li>Prototype: `int _isdigit(int c);`</li><li>Returns 1 if c is a digit</li><li>Returns 0 otherwise</li></ul>

### 2-mul.c
Function that multiplies two integers<ul><li>Prototype: `int mul(int a, int b);`</li></ul>

### 3-print_numbers.c
Function that prints the numbers, from 0 to 9, followed by a new line<ul><li>Prototype: `void print_numbers(void);`</li><li>You can only use _putchar twice in your code</li></ul>

### 4-print_most_numbers.c
Function that prints the numbers, from 0 to 9, followed by a new line<ul><li>Prototype: `void print_most_numbers(void);`</li><li>Do not print **2** and **4**</li><li>You can only use `_putchar` twice in your code</li></ul>

### 5-more_numbers.c
Function that prints 10 times the numbers, from 0 to 14, followed by a new line<ul><li>
Prototype: `void more_numbers(void);`</li><li>You can only use `_putchar` three times in your code</li></ul>

### 6-print_line.c
Function that draws a straight line in the terminal<ul><li>Prototype: `void print_line(int n);`</li><li>You can only use `_putchar` function to print</li><li>Where `n` is the number of times the `_` should be printed</li><li>The line should end with a \n</li><li>If n is 0 or less, the function should only print *\n*</li></ul>

### 7-print_diagonal.c
Function that draws a diagonal line on the terminal<ul><li>Prototype: `void print_diagonal(int n);`</li><li>You can only use `_putchar` function to print</li><li>Where `n` is the number of times the character *\* should be printed</li><li>The diagonal should end with a \n</li><li>If n is 0 or less, the function should only print a \n</li></ul>

### 8-print_square.c
Function that prints a square, followed by a new line<ul><li>Prototype: `void print_square(int size);`</li><li>You can only use `_putchar` function to print</li><li>Where `size` is the size of the square</li><li>If size is 0 or less, the function should print only a new line</li><li>Use the character `#` to print the square</li></ul>

### 9-fizz_buzz.c
The **“Fizz-Buzz test”** is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.It is a Program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz
* Each number or word should be separated by a space
* You are allowed to use the standard library

### 10-print_triangle.c
Function that prints a triangle, followed by a new line.
* Prototype: `void print_triangle(int size);`
* You can only use _putchar function to print
* Where size is the size of the triangle
* If size is 0 or less, the function should print only a new line
* Use the character # to print the triangle

### 100-prime_factor.c
Program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
* You are allowed to use the standard library
* Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

### 101-print_number.c
Function that prints an integer.
* Prototype: `void print_number(int n);`
* You can only use _putchar function to print
* You are not allowed to use `long`
* You are not allowed to use arrays or pointers
* You are not allowed to hard-code special values

