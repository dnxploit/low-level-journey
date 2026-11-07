/* Chapter 4, Programming Project 4: integer to octal */

#include <stdio.h>

int main(void)
{
    int num, digit1, digit2, digit3, digit4, digit5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    digit5 = num % 8;
    num /= 8;
    digit4 = num % 8;
    num /= 8;
    digit3 = num % 8;
    num /= 8;
    digit2 = num % 8;
    num /= 8;
    digit1 = num % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
