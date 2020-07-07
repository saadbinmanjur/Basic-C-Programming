#include<stdio.h>
int main()
{
    double c,f;
    printf("Enter The Temperature in Celsius --->");
    scanf("%lf",&c);
    f=(c*1.8)+32;
    printf("The Temperature in Farenheit --->%0.2lf",f);
    return 0;
}
