#include<stdio.h>
int main()
{
    int ara[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low_index=0;
    int high_index=15;
    int mid_index,num;
    printf("Choose your number from ---> 1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100\n\nEnter it: ");
    scanf("%d",&num);
    while(low_index<=high_index)
    {
        mid_index=(low_index+high_index)/2;
        if(num==ara[mid_index])
        {
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
    if(low_index>high_index)
    {
        printf("\n\n%d is not in the array\n\n",num);
    }
    else
    {
        printf("\n\nYou searched for ---> %d\nwhich is ---> %d <---element of the array\n\n",ara[mid_index],mid_index);
    }
    return 0;
}
