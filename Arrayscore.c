//Putscore in array and calc average and diff with average
#include <stdio.h>
int main()
{
    int scores[20];
    int y=0,x=0;
    double Sum=0;
    printf("Insert Scores: ");
    scanf("%d",&y);
    while (y != 0)
    {
        Sum = Sum+y;
        scores[x++]=y;
        scanf("%d",&y);
    }
    double average = Sum/x;
    printf("Sum: %1.0f, Avg: %3.2f",Sum,average);
    for(int h=0;h<x;h++)
    {
        printf("Score: %3d,Deviation: %3.2f\n",scores[h],scores[h]-average);
    }
}