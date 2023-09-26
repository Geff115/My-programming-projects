#include <stdio.h>

/* Calling the getchar function to input characters and
print out to the display */

main ()
{
    int ch1, ch2;

    printf("Please type in two characters together: \n");

    ch1 = getc( stdin );
    ch2 = getchar();

    printf("The first charcter you entered is: %c\n", ch1);
    printf("The second character you entered is: %c\n", ch2);

    return 0;
}