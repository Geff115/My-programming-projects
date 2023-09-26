#include <stdio.h>

/* This function multiplies two integers*/

int number_multi(int j, int k)
{
    int result;

    result = j * k;
    return result;
}


/* This function calls out the aforementioned 
function, which multiplies two integers, and prints out the result */

int main(void)
{   
    int two_x;

    two_x = number_multi(3, 5);
    printf("The multiplication of 3 times 5 is: %d\n", two_x);
    return 0;
}

