/* If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402 */
#include<stdio.h>
int main(void)
{
    int i = 1,sum = 0,rem,num;
    printf("enter the number :");
    scanf("%d",&num);

    while(num!=0)
    {
        rem = num % 10;
        sum = sum+(rem + 1)%10*i;
        i = i*10;
        num = num / 10;
    }

    printf("%d",sum);
}
