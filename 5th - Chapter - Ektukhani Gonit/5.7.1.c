#include<stdio.h>
int main()
{
    double f,c;
    printf("The Temperature in Farenheit --->");
    scanf("%lf",&f);
    c=(f-32)/1.8;
    printf("Enter The Temperature in Celsius --->%0.2lf",c);
    return 0;
}
