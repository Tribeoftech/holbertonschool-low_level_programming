
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* ..main.. doc lastd */
int main(void)
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (n % 10 > 5)
{
printf("Last digit of %d and %d is greater than 5,\n", n, lastDigit);
}
else if (n % 10 == 0)
{
printf("Last digit of %d and %d is 0,\n", n, lastDigit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0,\n", n, lastDigit);
}
return (0);
}
