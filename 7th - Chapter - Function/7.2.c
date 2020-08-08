#include<stdio.h>
double add(double num1,double num2)
{
    double sum=num1+num2;
    return sum;
}
int main()
{
    double a,b,c;
    printf("Enter value of 1st number: ");
    scanf("%lf",&a);
    printf("\nEnter value of 2nd number: ");
    scanf("%lf",&b);
    c=add(a,b);
    printf("\nThe Sum is: %lf",c);
    return 0;
}
