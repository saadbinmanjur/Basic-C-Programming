#include<stdio.h>
int main()
{
    char ara[100];
    while(NULL!=gets(ara))
    {
        printf("\n\n%s\n\n",ara);
    }
    return 0;
}
