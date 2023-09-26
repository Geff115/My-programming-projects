/* Outputting a character with putc() */
#include <stdio.h>
main ()
{
    int ch;
    
    ch = 65;
    printf("The character that has the numeric value of 65 is: %c\n", ch);

    putc(ch, stdout);

    return 0;
}