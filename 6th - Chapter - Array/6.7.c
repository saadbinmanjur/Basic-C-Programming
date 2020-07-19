#include<stdio.h>
int main()
{
    int ft_marks[10]={53,44,78,69,58,75,87,67,95,65},
    st_marks[10]={60,47,80,40,80,75,78,70,58,58},
    final_marks[10]={70,68,90,75,78,86,65,87,97,86};
    int i;
    double total_marks[10];
    for(i=0;i<10;i++)
    {
        total_marks[i]=ft_marks[i]/4.0+st_marks[i]/4.0+final_marks[i]/2.0;
    }
    for(i=1;i<=10;i++)
    {
        printf("Roll No: %d\tTotal Marks: %0.0lf\n",i,total_marks[i-1]);
    }
    return 0;
}
