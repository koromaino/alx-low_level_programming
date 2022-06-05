#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0 )
	prinf("%d is positive\n", n);
if (n == 0)
	printf("%dis zero\n", n);
if (n < 0)
{
	printf("%d negative\n", n);
}
return(0);
}
