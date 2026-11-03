/* Chapter 2, Programming Project 2: volume of a sphere with a 10 m radius */

#include <stdio.h>

#define PI 3.14159f

int main (void)
{
    float radius = 10.0f;
    float volume = 4.0f / 3.0f * PI * (radius * radius * radius); 
    /* With 4 / 3 the result is 3141.59: both numbers are integers, so 4 / 3 is 1 (decimals are lost) and the formula becomes PI * r * r * r. */
    printf("Volume: %f\n", volume);

    return 0;
}