#include <stdio.h>

// This function creates and executes a while loop

int main()
{
    char f;

    printf("Please enter a character\n (enter 'K' to exit loop)\n");

    while (f != 'K') {
        f = getc(stdin);
        putchar(f);
    }
    return 0;
}