#include <stdio.h>

// This function assigns variale x to 1 and then increments it

int main()
{
    int x;

    x = 1;

    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);

    return 0;
}