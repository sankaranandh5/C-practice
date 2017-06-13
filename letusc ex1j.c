/* In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number
of illiterate men and women if the population of the town is
80,000. */
#include<stdio.h>
int main(void)
{
    int total_population = 80000;
    int total_literacy = total_population * .48;
    int total_men = total_population * .52;
    int total_literate_men = total_literacy * .35;
    int total_women,total_literate_women,total_illitrate_men,total_illitrate_women;

    total_women = total_population - total_men;
    total_illitrate_men = total_men  - total_literate_men;
    total_literate_women = total_literacy - total_literate_men;
    total_illitrate_women = total_population - (total_men + total_literate_women);

    printf("the total literate men = %d",total_literate_men);
    printf("\nthe total illiterate men = %d",total_illitrate_men);
    printf("\nthe total literate women = %d",total_literate_women);
    printf("\nthe total illiterate women = %d",total_illitrate_women);

    return 0;
}
