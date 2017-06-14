/* A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer. */
#include<stdio.h>
int main(void)
{
    int amnt;
    printf("enter the amount you want to withdraw");
    scanf("%d",&amnt);


    printf("in hundreds %d",amnt / 100);

    printf("in fifties %d",(amnt%100)/50);

    printf("in tens %d",((amnt%100)%50)/10);

     return 0;

}
