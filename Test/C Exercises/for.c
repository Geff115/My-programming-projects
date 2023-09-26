#include <stdio.h>

/* this program uses the for loop to print out
numbers in hexdecimal formats and integer formats */

int main()
{
    int i;
    printf("Hex(uppercase), Hex(lowercase), decimal:\n");

    for (i=0; i<16; i++) {
        printf("%X, %x, %d\n", i, i, i);   /* This for loop prints numbers of 0 through 16 */
    }
    return 0;
}