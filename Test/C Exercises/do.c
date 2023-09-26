#include <stdio.h>

/* This function uses the while loop as the outer loop
and the do-while loop as the inner loop */

int main()
{
    int i, j;

    i = 1;
    j = 1;

    while (i < 3) {
        printf("The start of iteration %d of the outer loop.\n", i);
        i++;
            do {
                printf("The iteration of %d of the inner loop.\n", j);
                j++;
            } while (j < 4);
        printf("The end of iteration %d of the outer loop.\n", i);
    }
    
    return 0;
}