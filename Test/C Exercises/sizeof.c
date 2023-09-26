#include <stdio.h>
/**
* This function uses the sizeof operator 
* and then prints the size of functions
* and variables
*/
int main()
{
    char ch = ' ';
    unsigned int int_num = 0;
    float flt_num = 0.00f;
    double double_num = 0.00;

    printf("The size of char is %d-byte\n", sizeof(char));
    printf("The size of ch is %d-byte\n", sizeof ch);
    printf("The size of unsigned int is %d-byte\n", sizeof(unsigned int));
    printf("The size of int_num is %d-byte\n", sizeof int_num);
    printf("The size of double is %d-byte\n", sizeof(double));
    printf("The size of double_num is %d-byte\n", sizeof double_num);

    return 0;
}