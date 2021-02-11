#include "palindrome.h"
/**
 * is_palindrome - function that checks if an unsigned integer is a palindrome
 * @n: the unsigned integer to check
 * Return: 1 if n is palindrome, 0 otherwise
 */
int is_palindrome(unsigned long n)
{
	unsigned long i = 0, j = n;

	while (j != 0)
	{
		i = i * 10 + (j % 10);
		j = j / 10;
	}
	if (n == i)
		return (1);
	return (0);
}