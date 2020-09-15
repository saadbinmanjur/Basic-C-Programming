#include<stdio.h>
int main()
{
    int r,c,sum=0,ara[5][5]={{6,4,7,8,9},
    {3,7,1,9,9},
    {8,6,4,2,7},
    {2,4,2,5,9},
    {4,1,6,7,3}};
    printf("\n\n");
    for (r = 0; r < 5; r++)
    {
        for (c = 0; c < 5; c++)
        {
            sum = sum + ara[r][c];
        }
        printf("Sum of row %d is: %d\n", r + 1, sum);
        sum = 0;
    }
    printf("\n\n\n");
    for (c = 0; c < 5; sum = 0, c++)
    {
        for (r = 0; r < 5; r++)
        {
            sum = sum + ara[r][c];
        }
        printf ("Sum of column %d is: %d\n", c + 1, sum);
    }
    printf("\n\n\n");
    return;
}

