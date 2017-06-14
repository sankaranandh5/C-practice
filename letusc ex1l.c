/* If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item. */
/* gain = selling price - cost price */

#include<stdio.h>
int main(void)
{
int sp,cp,gain,i;


for (i=1;i<=15;i++)
{
printf("%d.enter the selling price and gain\n",i);
scanf("%d %d",&sp,&gain);
cp = sp - gain;
printf("cost price of the item = %d\n",cp);
}
return 0;
}
