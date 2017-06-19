/* A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not */
#include<stdio.h>
int main(void)
{
    int num,rev=0,n,i;
    printf("enter the five digit number ");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
        n = num % 10;
        rev = rev*10+n;
        num = num/10;
    }
    printf("the reversed number is %d ",rev);

}
