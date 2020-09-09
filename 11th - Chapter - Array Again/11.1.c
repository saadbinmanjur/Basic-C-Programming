#include<stdio.h>
int main()
{
    int marks[4][10]={{80,70,92,78,58,83,85,66,99,81},{75,67,55,100,91,84,79,61,90,97},{98,67,75,89,81,83,80,90,88,77},{0,0,0,0,0,0,0,0,0,0}};
    int collum;
    for(collum=0;collum<10;collum++)
    {
        marks[3][collum]=marks[0][collum]/4.0+marks[1][collum]/4.0+marks[2][collum]/2.0;
        printf("\n\nRoll NO: %d\nTotal Marks: %d\n\n",collum+1,marks[3][collum]);
    }
    return 0;
}
