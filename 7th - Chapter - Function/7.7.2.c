#include<stdio.h>
int find_min(int ara[],int n)
{
    int i,min=ara[0];
    for(i=0;i<n;i++)
    {
        if(ara[i]<min)
        {
            min=ara[i];
        }
    }
    return min;
}
int main()
{
    int ara[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int n=11;
    int min=find_min(ara,n);
    printf("%d",min);
    return 0;
}
