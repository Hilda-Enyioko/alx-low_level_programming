#include <stdio.h>

/*apply the constructor attribute to first function*/
/*so that it is executed before main*/
void first(void) __attribute__ ((constructor));
/**
 * first - function that is implemented before main() function
 *
 */
void first(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
