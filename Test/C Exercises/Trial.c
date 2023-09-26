#include <stdio.h>

int main()
{
    /* This function makes use of the arithmetic operators */

    int x, y, z;

    x = 1;
    y = 3;
    z = 10;

    printf("Given x = %d, y = %d, and z = %d\n", x, y, z);

    x = x + y;
    printf("x = x + y assigns %d to x;\n", x);

    x = 1;  /* reset the value of x to default */
    x += y;
    printf("x += y assigns %d to x;\n", x);

    x = 1;  /* reset the value of x to default */
    z = z * x + y;
    printf("z = z * x + y assigns %d to z;\n", z);

    z = 10;  /* reset the value of z to default */
    z = z * (x + y);
    printf("z = z * (x + y) assigns %d to z;\n", z);

    z = 10;  /* reset the value of z to default */
    z *= x + y;
    printf("z *= x + y assigns %d to z;\n", z);
    return 0;
}

