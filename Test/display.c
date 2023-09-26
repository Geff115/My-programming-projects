/* This program displays two numbers and align 
them to the left of the field */

#include <stdio.h>
main()
{
    int whole_num;
    float deci_num;

    whole_num = 123;
    deci_num = 123.456;

    printf("To align whole_num to the left: %-3d\n", whole_num);
    printf("To align deci_num to the left: %-6.3f\n", deci_num);

    return 0;
}