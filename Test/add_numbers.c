#include <stdio.h>

/* This function adds two numbers*/

int number_add (int x, int y)
{
    int result;
    result = x + y;
    return result;
}

/* This function calls out the aforementioned function, which adds two numbers*/

int main()
{
    int sum;
    sum = number_add(5, 12);
    
    printf("The addition of 5 and 12 is: %d\n", sum);
    return 0;
}