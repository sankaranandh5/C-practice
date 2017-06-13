/* If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/
#include<stdio.h>
int main(void)
{
    int a,n,num,sum = 0;
    printf("enter the number");
    scanf("%d",&num);

    a = num % 10;
    n = num / 10;
    sum = sum + a;

    a = n % 10;
    n = n / 10;

    a = n % 10;
    n = n / 10;

    a = n % 10;
    n = n / 10;

    a = n % 10;
    sum = sum + a;

    printf("so the sum of first and last digit is %d",sum);
    return 0;
}
/* #include<stdio.h>
int main(void)
{
int num,a = 0,sum = 0,n =0;
printf("enter the number");
scanf("%d",&num);

n = num / 10;
a = num % 10;
sum = sum + a;

n = n / 10;

n = n / 10;
a = n % 10;
sum = sum + a;

printf("%d",sum);
return 0;

} */
