#include <stdio.h>
/* This function use different operators to print 
the values of different operations */

int main()
{
    int x, y;

    x = 1;
    y = 3;

    printf("x += y produces: %d\n", x += y);
    printf("x += -y produces: %d\n", x += -y);
    printf("x -= y produces: %d\n", x -= y);
    printf("x -= -y produces: %d\n", x -= -y);
    printf("x *= y produces: %d\n", x *= y);
    printf("x *= -y produces: %d\n", x *= -y);

    return 0;
}