/* The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle */
#include<stdio.h>
int main(void)
{
    float area_of_rectangle,peri_of_rec,area_of_circle,circumference_of_circle;
    float l,b,r,pi=3.14;

      scanf("%f%f%f",&l,&b,&r);

      area_of_rectangle = l*b;
      peri_of_rec = 2*(l+b);
      area_of_circle = pi*r*r;
      circumference_of_circle = 2*pi*r;


      printf("area of rectangle %f",area_of_rectangle);
      printf("perimeter of rectangle %f",peri_of_rec);
      printf("area of circle %f",area_of_circle);
      printf("circumference of circle %f",circumference_of_circle);

      return 0;
}
