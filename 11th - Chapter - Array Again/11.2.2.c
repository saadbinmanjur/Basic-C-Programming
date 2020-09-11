#include<stdio.h>
int main()
{
    int row,col,namta_10[10][10];
    int odd=0,even=0,total=0,tmp;
    printf("\n\n");
    for(row=1;row<=10;row++)
    {
        tmp=0;
        for(col=1;col<=10;col++)
        {
            tmp=tmp+row;
            namta_10[row - 1][col - 1] = tmp;
            printf("%d x %d = %d\n", row, col, namta_10[row - 1][col -1]);
            total=total+namta_10[row - 1][col - 1];
            if(namta_10[row - 1][col -1] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        printf("\n");
    }
    printf("Total summation of number is= %d\n", total);
    printf("Total number even number is= %d\n", even);
    printf("Total number of odd number is= %d\n\n", odd);
    return 0;
}
