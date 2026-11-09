/* Chapter 5, Programming Project 3: broker.c with shares and price, plus a rival broker's commission */

#include <stdio.h>

int main(void)
{
    float commission, value, price;
    int shares;

    printf("Enter the number of shares: ");
    scanf("%d", &shares);

    printf("Enter the price per share: ");
    scanf("%f", &price);

    value = shares * price;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("Our commission: $%.2f\n", commission);
    printf("Rival’s commission: $%.2f\n", shares < 2000 ?
         33 + 0.03 * shares : 33 + 0.02 * shares);

    return 0;
}