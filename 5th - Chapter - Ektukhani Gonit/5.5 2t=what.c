#include<stdio.h>
int main()
{
    double v,t,t2;
    printf("Give the value of velocity(v): ");
    scanf("%lf",&v);
    printf("\nGive the value of time(t): ");
    scanf("%lf",&t);
    t2=2*t*v;
    printf("\nThe distance of 2t is: %0.2lf\nwhere v=%0.2lf & t=%0.2lf",t2,v,t);
    return 0;
}
