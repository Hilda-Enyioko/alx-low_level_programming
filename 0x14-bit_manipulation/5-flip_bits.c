#include "main.h"

/**
 * flip_bits - returns number of bits needed
 * to flip to get from one number to another
 * @n: source to flip from
 * @m: destination to flip to
 * Return:number of bits needed
 * to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int nflip;
unsigned long int xor;
nflip = 0;
xor = n ^ m;
while (xor > 0)
{
nflip = nflip + (xor & 1);
xor = xor >> 1;
}
return (nflip);
}
