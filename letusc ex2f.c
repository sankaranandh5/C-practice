/* If the ages of Ram, Shyam and Ajay are input through the
keyboard, write a program to determine the youngest of the
three. */
#include<stdio.h>
int main(void)
{
    int ram,shyam,ajay;
    printf("enter the age of ram,shyam and ajay\n");
    scanf("%d\n%d\n%d",&ram,&shyam,&ajay);

    if (ram<shyam && ajay>shyam)
    printf("ram is the youngest of three %d",ram);

    if(shyam<ram && ram<ajay)
    printf("shyam is the youngest of the three , %d",shyam);

    if (ajay<ram && ram<shyam)
        printf("ajay is the youngest of the three %d",ajay);
}
