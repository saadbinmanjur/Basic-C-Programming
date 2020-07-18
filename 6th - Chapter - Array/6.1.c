#include<stdio.h>
int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;
    printf("Enter Marks of First Terminal Exam:");
    scanf("%d",&ft_marks);
    printf("Enter Marks of Second Terminal Exam:");
    scanf("%d",&st_marks);
    printf("Enter Marks of Final Exam:");
    scanf("%d",&final_marks);
    total_marks=(ft_marks/4.0)+(st_marks/4.0)+(final_marks/2.0);
    printf("\n%0.2lf",total_marks);
    return 0;
}
