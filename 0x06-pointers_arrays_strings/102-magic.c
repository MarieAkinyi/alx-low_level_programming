#include <stdio.h>
int main(void)
{
	int n;
       	int a[5];
	int *p;


	a[2] = 1024;				       
	p = &n;
/**
 * write your code of line
 * remeber
 * magic-magic
 * youre not allowed to use a
 * you are not allowed to modify p
 * only one statement
 * you are allowed to code anything esle than this line of code
 */
	*(p + 5) = 98;
/*...so this prints 98\n*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}
