#include <stdio.h>

/* This function shows the difference between a
float data type vs an int data type */

main()
{
    int int_num1, int_num2, int_num3;   /* integer variables*/

    float flt_num1, flt_num2, flt_num3;  /* floating-point variables */

    int_num1 = 32 / 10;    /* The divisor and the dividend are both integers */
    flt_num1 = 32 / 10;
    int_num2 = 32.0 / 10;   /*The divisor is an integer */
    flt_num2 = 32.0 / 10;
    int_num3 = 32 / 10.0;    /* The dividend is an integer */
    flt_num3 = 32 / 10.0;

    printf("The value of int_num1 is: %d\n", int_num1);
    printf("The value of flt_num1 is: %f\n", flt_num1);
    printf("The value of int_num2 is: %d\n", int_num2);
    printf("The value of flt_num2 is: %f\n", flt_num2);
    printf("The value of int_num3 is: %d\n", int_num3);
    printf("The value of flt_num3 is: %f\n", flt_num3);

    return 0;
}