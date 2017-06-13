/* If a five-digit number is input through the keyboard, write a
program to reverse the number. */
#include <stdio.h>
int main(void)
{
    int n,temp = 0;
    printf("enter the number\n");
    scanf("%d",&n);

    while (n>0)
    {
        temp = temp*10 + n%10;
        n = n/10;
    }
    printf("the reverse num is %d",temp);
}
