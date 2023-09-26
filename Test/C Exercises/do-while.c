#include <stdio.h>

/* This program uses the do-while loop and terminates when 
the loop is logically false */

/** I replaced this do-while loop with a for loop below

int main()
{
    int i;
    i = 65;

    do {
        printf("The numeric value of %c is %d\n", i, i);
        i++;
    } while (i < 72);

    return 0;
} 
*/

int main()
{
    int i;

    for (i=65; i<72; i++)
        printf("The numeric value of %c is %d\n", i, i);

    return 0;
}
