/* Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator) */
#include<stdio.h>
int main(void)
{
    int feb;
    printf("enter the number of days in feb this year");
    scanf("%d",&feb);

    if (feb%2==0)
    {
        printf("this year is not a leap year");
    }
else
    printf("this year is leap year");
}
