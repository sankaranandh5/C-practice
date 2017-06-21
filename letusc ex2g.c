/* Write a program to check whether a triangle is valid or not,
when the three angles of the triangle are entered through the
keyboard. A triangle is valid if the sum of all the three angles
is equal to 180 degrees. */
#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("enter the three angles\n");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b+c == 180)
    {
        printf("the triangle is valid");
    }
    else
    printf("invalid");
}
