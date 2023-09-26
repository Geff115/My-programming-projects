#include <stdio.h>

/* checking the new value of z after appending the 
values of x and y */

int main()
{
    int x, y, z;

    x = 3;
    y = 6;
    z = x * y == 18;

    printf("value of z is: %d\n", z);
    return 0;
}