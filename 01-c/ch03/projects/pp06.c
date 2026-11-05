/* Chapter 3, Programming Project 6: addfrac.c reading both fractions at once (a/b+c/d) */

#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter the two fractions separated by a plus sign: ");
    scanf("%d /%d +%d /%d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}