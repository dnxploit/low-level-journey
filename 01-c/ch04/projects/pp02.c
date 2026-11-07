/* Chapter 4, Programming Project 2: reverses a three-digit number */

#include <stdio.h>

int main(void)
{
    int num, first_digit, second_digit, third_digit;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    first_digit = num / 100;
    second_digit = (num / 10) % 10;
    third_digit = num % 10;

    printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

    return 0;
}