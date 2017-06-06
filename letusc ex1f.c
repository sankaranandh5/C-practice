/* Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D. */
#include<stdio.h>
int main(void)
{
    int C,D,TEMPORARY_VARIABLE;
    printf("enter the inputs\n");
    scanf("%i%i",&C,&D);
    TEMPORARY_VARIABLE = C;
    C = D;
    D = TEMPORARY_VARIABLE;
    printf("C = %i and D = %i",C,D);
    return 0;

    }
