/* If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100. */
#include<stdio.h>
int main(void)
{
    int m1,m2,m3,m4,m5;
    float per,agg;
    printf("enter the marks");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/5;
    printf("total percentage = %f",per);
    return 0;

}
