/* Chapter 2, Exercise 3: condensed dweight.c */

#include <stdio.h>

int main(void)
{
    int height = 8, length = 12, width = 10;
    int volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight: %d\n", (volume + 165) / 166);

    return 0;
}