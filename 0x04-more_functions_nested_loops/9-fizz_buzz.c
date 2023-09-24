#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 0 to 100 identifying multiples of 3, 5 or both
 * 3 and 5 with Fizz, Buzz and FizzBuzz respectively
 * Return: 0 (Success)
 */
int main(void)
{
	int i;


	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);

		}
	}
}
