#include<stdio.h>
int main()
{
    int i,marks_count[101],
    total_marks[]={80,54,67,65,76,86,79,85,84,100,55,87,96,45,86,76,88,97,85,76,52,81,100,80,54,70,66,80,90,67,91,92,99,79,52,75,87,67,74};
    for(i=0;i<101;i++)
    {
        marks_count[i]=0;
    }
    for(i=0;i<40;i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i=40;i<=100;i++)
    {
        printf("Marks: %d\tCount: %d\n",i,marks_count[i]);
    }
    return 0;
}
