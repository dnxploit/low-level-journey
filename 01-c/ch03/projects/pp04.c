/* Chapter 3, Programming Project 4: formats telephone number entered by the user */

#include <stdio.h>

int main(void)
{
    int area_code, exchange, line_number;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &area_code, &exchange, &line_number);

    printf("You entered %.3d.%.3d.%.4d\n", area_code, exchange, line_number);

    return 0;
}