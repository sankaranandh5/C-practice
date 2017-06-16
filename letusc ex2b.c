/* Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number */
#include <stdio.h>
int main(void)
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("the number is even");
    }
    else
        printf("the number is odd");
}
