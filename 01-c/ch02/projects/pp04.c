/* Chapter 2, Programming Project 4: ask the user for a dollar amount then display it with 5% tax added */

#include <stdio.h>

#define TAX 1.05f

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", amount * TAX);

    return 0;
}