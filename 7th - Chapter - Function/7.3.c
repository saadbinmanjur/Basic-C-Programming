#include<stdio.h>
double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}
int main()
{
    double a,b,c;
    a=2.8;
    b=2.7;
    c=add(a,b);
    printf("The sum of two numbers is: %lf",c);
    return 0;
}
