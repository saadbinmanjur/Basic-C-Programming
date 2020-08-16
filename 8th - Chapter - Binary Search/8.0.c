#include<stdio.h>
int main()
{
    int ara[]={1,5,7,8,10,20};
    int num=7,mid_index,low_index=0,high_index=5;
    while(1)
    {
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index])
        {
            printf("You search for ---> %d",num);
            break;
        }
        if(num>ara[mid_index])
        {
            low_index=mid_index+1;
        }
        else
        {
            high_index=mid_index-1;
        }
    }
    return 0;
}
