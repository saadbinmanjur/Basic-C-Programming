#include<stdio.h>
int main()
{
    int a,b,LCM;
    printf("Enter two numbers:\n\n");
    scanf("%d %d",&a,&b);
    while(a%b!=0)
    {
        int t=a%b;
        a=b;
        b=t;
    }
    LCM=(a*b)/b;
    printf("\nLCM is %d",LCM);
    getch();
}
