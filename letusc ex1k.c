/* A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer. */
#include<stdio.h>
int main(void)
{
    int amnt,a = 0,b,c;
    printf("enter the amount you want to withdraw");
    scanf("%d",&amnt);

    a = (amnt / 100);
    printf("if you want in hundreds %d",a);

    b = amnt / 50;
    printf("if you want in fifties %d",b);

    c = amnt/ 10;
     printf("if you want in tens %d",c);

     return 0;

}
