/* Chapter 4, Programming Project 1: reverses a two-digit number */

#include <stdio.h>

int main(void)
{
    int num, first_digit, second_digit;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    first_digit = num / 10;
    second_digit = num % 10;

    printf("The reversal is: %d%d\n", second_digit, first_digit);

    return 0;
}