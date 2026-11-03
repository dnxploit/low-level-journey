/* Chapter 2, Programming Project 3: pp02 asking the user for the radius */

#include <stdio.h>

#define PI 3.14159f

int main (void)
{
    float radius, volume;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * (radius * radius * radius); 
    printf("Volume: %f\n", volume);

    return 0;
}