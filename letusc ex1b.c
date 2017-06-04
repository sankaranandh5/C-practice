/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters */
#include <stdio.h>
int main(void)
{
    float dist,meters,feet,inches,centimeters;

    printf("enter the distance bwn two cities");
    scanf("%f",&dist);

    meters = dist * 1000;
    feet = (dist * 1000)*3.281;
    inches = feet * 12;
    centimeters = feet * 30;

    printf("the distance bwn two cities in meter=%f\nfeet=%f\ninches=%f\ncentimeters=%f",meters,feet,inches,centimeters);
    return 0;

}
