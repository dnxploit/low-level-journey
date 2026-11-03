/* Chapter 2, Programming Project 5: evaluates 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 */

#include <stdio.h>

int main(void)
{
    int x, polynomial;

    printf("Enter a value for x: ");
    scanf("%d", &x);

    polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) 
        - 5 * (x * x * x) - 1 * (x * x) + 7 * x - 6;

    printf("Polynomial result: %d\n", polynomial);

    return 0;
}