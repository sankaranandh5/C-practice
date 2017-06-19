#include<stdio.h>
int main(void)
{
    int year;
    printf("enter the year ");
    scanf("%d",&year);

    if (year%100==0)
    {
        if (year%400==0)
            printf("the ear is leap");
        else
            printf("the year is not leap");
    }
    else
    {
        if (year%4==0)
        printf("the year is leap");
        else
            printf("the year is not leap");
    }

}
