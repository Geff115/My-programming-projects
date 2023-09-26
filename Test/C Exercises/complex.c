#include <stdio.h>

/**
* i - integer variable
* j - integer variable
* main - A function that uses the for loop and terminates when the loop is false.
*/

int main()
{
    int i, j;

    for (i=0, j=8; i<8; i++, j--)
        printf("%d + %d =%d\n", i, j, i + j);
    return 0;
}