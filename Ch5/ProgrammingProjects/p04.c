/* Here's a simplified version of the Beaufort scale, which is used to estimate
 * wind force:
 *
 * Speed (knots)   Description
 * Less than 1     Calm
 * 1-3             Light air
 * 4-27            Breeze
 * 28-47           Gale
 * 48-63           Storm
 * Above 63        Hurricane
 *
 * Write a program that asks the user to enter a wind speed (in knots),
 * then displays the corresponding description.
 */
#include <stdio.h>

int main(void)
{
    float windspeed;

    printf("\nEnter wind speed (in knots): ");
    scanf("%f", &windspeed);

    printf("Wind Speed: ");

    if (windspeed < 1)
    {
        printf("Calm");
    }
    else if (windspeed >= 1 && windspeed <= 3)
    {
        printf("Light air");
    }
    else if (windspeed >= 4 && windspeed <= 27)
    {
        printf("Breeze");
    }
    else if (windspeed >= 28 && windspeed <= 47)
    {
        printf("Gale");
    }
    else if (windspeed >= 48 && windspeed <= 63)
    {
        printf("Storm");
    }
    else if (windspeed > 63)
    {
        printf("Hurricane");
    }

    printf("\n\n");

    return 0;
}
