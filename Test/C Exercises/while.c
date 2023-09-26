#include <stdio.h>

/* This function uses the while loop and 
terminates when c != 'x' */

int main()
{
    int c;

    c = ' ';
    printf("Please enter a character:\n(enter x to exit loop)\n");
    
    while (c != 'x') {
        c = getc(stdin);
        putchar(c);
    }

    printf("\nOut of the while loop. Bye!\n");
    return 0;
}