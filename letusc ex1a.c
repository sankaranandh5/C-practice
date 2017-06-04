/* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */

#include<stdio.h>
main( )
{
float bs;
float gross_sal,da,rent_all;
printf("enter basic salary :");
scanf("%f",&bs);

da = bs * 0.4;
rent_all = bs*0.2;
gross_sal = bs + da + rent_all;
printf("gross salary is %f",gross_sal);
return 0;

}
