#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - return 1 if integer is a prime number, else return 0
 * @n: integer to be tested
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - checks for prime numbers
 * @n: number to be checked
 * @a: divisors to be tested
 * Return: 0 or 1
 */
int check_prime(int n, int a)
{
if (a >= n && n > 1)
{
return (1);
}
else if (n % a == 0 || n <= 1)
{
return (0);
}
else
{
return (check_prime(n, a + 1));
}
}
