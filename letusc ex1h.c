/* If a five-digit number is input through the keyboard, write a
program to reverse the number. */

#include<stdio.h>
int main(void)
{
    int a,n,num;
    int revnum = 0;
    printf("enter the number");
    scanf("%d",&num); /* ex: num = 12323 here*/

    a = num % 10; /* if 12323 divided by 10 (1232.3) the remainder is 3 */
    n = num / 10; /* 1232.3 in that 1232 is get passed*/
    revnum = revnum + a*10000; /* revnum = (garbage value) 0 + 3*10000 */

    a = n % 10;
    n = n / 10;
    revnum = revnum + a*1000;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a*100;

    a = n % 10;
    n = n / 10;
    revnum = revnum + a*10;

    a = n % 10;
    revnum = revnum + a;

    printf("so your reversed number is %d",revnum);
    return 0;
}


