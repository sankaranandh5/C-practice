/* Find the absolute value of a number entered through the
keyboard.  */
#include<stdio.h>
int main(void)
{
    int a,num;
    printf("enter any number");
    scanf("%d",&num);

    if (num<0)
        num = num*-1;

        printf("%d",num);

}
