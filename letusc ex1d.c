/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees*/
#include<stdio.h>
int main(void)
{
    float fahrenheit,centigrade_degrees;
    printf("enter the temperature of the city :");
    scanf("%f",&fahrenheit);
    centigrade_degrees = (fahrenheit-32)*5/9;
    printf("\nso city is %f degree celsius",centigrade_degrees);
    return 0;
}
