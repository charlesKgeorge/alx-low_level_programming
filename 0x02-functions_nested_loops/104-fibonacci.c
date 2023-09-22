#include <stdio.h>
#include <math.h>

/**
 * split_num - Splits numbers
 * @y: The value to be split
 * @a: half1
 * @b: half2
 * @digits: amount of numbers in a half grouped starting from far right
 *
 * Description: splits larger values into two parts to allow storage on
 * unsigned long int without having overlap that messes up the output
 * Return: No reteurn value
 */
void split_num(long int y, long int *a, long int *b, int digits)
{
	long int x = 1;
	int i = 0;


	while (i < digits)
	{
		x *= 10;
		i++;
	}

	*a = y / x;
	*b = y % x;
}

/**
 * carrying - facilitates adding of a split number
 * @sum: sum of the values on the right to be determined whether past
 * the limits and thus worke on if the case
 * @a: the split section on the left of the sumed one
 * @digits: limit for number of digits grouping to help set overlap
 *
 * Description: If summation of split value on the right exceedes the number
 * of digits allowed for it this funcion carries the extra towards the left
 * Return: No return
 **/
void carrying(long int *sum, long int *a, int digits)
{
	long int x = 1;
	int i = 0;

	while (i < digits)
	{
		x *= 10;
		i++;
	}

	if (*sum > x - 1)
	{
		*a += *sum / x;
		*sum %= x;
	}
}

/**
 * borrowing - adds to split on the right from the one on the left
 * @diff: the difference result
 * @a: the subtracted in the next value
 * @digits: sets the amount to be borrowed
 *
 * Return: no return value
 */
void borrowing(long int *diff, long int *a, int digits)
{
	long int x = 1;
	int i = 0;

	while (i < digits)
	{
		x *= 10;
		i++;
	}

	if (*diff < 0)
	{
		*diff += x;
		*a += 1;
	}
}

/**
 * main - Entry point
 *
 * Description: Prints first 50 numbers of Fibonacci sequence
 * Return: 0(Success)
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, a1, a11, a12, a2, b1, b11, b12, b2;

	for (; i < 45; i++)
	{
		b += a;
		a = b - a;
		printf("%lu, ", b);
	}

	split_num(a, &a1, &a2, 9);
	split_num(b, &b1, &b2, 9);
	for (; i < 88; i++)
	{
		b2 += a2;
		carrying(&b2, &b1, 9);
		b1 += a1;
		a2 = b2 - a2;
		borrowing(&a2, &a1, 9);
		a1 = b1 - a1;
		printf("%lu%09lu, ", b1, b2);
	}
	split_num(a1, &a11, &a12, 6);
	split_num(b1, &b11, &b12, 6);
	for (; i < 98; i++)
	{
		b2 += a2;
		carrying(&b2, &b12, 9);
		b12 += a12;
		carrying(&b12, &b11, 6);
		b11 += a11;
		a2 = b2 - a2;
		borrowing(&a2, &a12, 9);
		a12 = b12 - a12;
		borrowing(&a12, &a11, 6);
		a11 = b11 - a11;
		printf("%lu%06lu%09lu", b11, b12, b2);
		(i != 97) ? printf(", ") : printf("\n");
	}
	return (0);
}
