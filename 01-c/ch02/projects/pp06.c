/* Chapter 2, Programming Project 6: pp05 using Horner's Rule */

#include <stdio.h>

int main(void)
{
    int x, polynomial;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Polynomial result: %d\n", polynomial);

    return 0;
}