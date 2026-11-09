/* Chapter 5, Programming Project 6: upc.c modified to check whether a UPC is valid */

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
    check_digit, calculated_check, first_sum, second_sum, total;

    printf("Enter the UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
         &j1, &j2, &j3, &j4, &j5, &check_digit);

    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    calculated_check = 9 - ((total - 1) % 10);

    if (check_digit == calculated_check) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }

    return 0;
}