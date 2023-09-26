#include <stdio.h>

/* This function multiplies two integers and returns the result*/

int number_multi(int j, int k)
{
    int result;
    
    result = j * k;
    return result;
}

/* This function prints out the result of the multiplication of two integers*/

int main(void)
{
    int multi;

    multi = number_multi(10, 10);
    printf("The multiplication of 10 and 10 is: %d\n", multi);
    return 0;
}