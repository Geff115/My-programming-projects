/* This program puts the characters B, y, and e together on the screen */

#include <stdio.h>
char main ()
{
    char c1, c2, c3;

    c1 = 'B';
    c2 = 'y';
    c3 = 'e';

    putc(c1, stdout);
    putc(c2, stdout);
    putc(c3, stdout);

    return 0;
}