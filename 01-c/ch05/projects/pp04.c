/* Chapter 5, Programming Project 4: wind speed (knots) to Beaufort scale description */

#include <stdio.h>

int main(void)
{
    int speed;

    printf("Enter the wind speed (knots): ");
    scanf("%d", &speed);

    if (speed < 1) {
        printf("Calm\n");
    } else if (speed <= 3) {
        printf("Light air\n");
    } else if (speed <= 27) {
        printf("Breeze\n");
    } else if (speed <= 47) {
        printf("Gale\n");
    } else if (speed <= 63) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }

    return 0;
}