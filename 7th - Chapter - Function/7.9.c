#include<stdio.h>
double pi=3.1416;
double area_of_circle(double r)
{
    double a=pi*r*r;
    return a;
}
int main()
{
    double a,r,pi;
    printf("Enter the value of radius of circle: ");
    scanf("%lf",&r);
    a=area_of_circle(r);
    printf("\nThe area of your circle is: %0.2lf",a);
    return 0;
}
