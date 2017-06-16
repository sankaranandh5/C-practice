/* If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred. */
#include <stdio.h>
main( )
{
int cp,sp,gain,loss;
printf("enter cost price and selling price");
scanf("%d %d",&cp,&sp);

if(sp>cp)
{
    printf("profit = %d",sp-cp);
}
else
{
    printf("loss = %d",-(sp-cp));
}
}
