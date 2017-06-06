/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’) */

#include<stdio.h>
int main(void)
{
    int a,n,num;
    int sum = 0;
    printf("enter the number");
    scanf("%d",&num);

    a = num % 10;
    n = num / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum +a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;
    sum = sum + a;

    a = n % 10;
    sum = sum + a;

    printf("the sum of fie digits is %d",sum);
    return 0;
}
