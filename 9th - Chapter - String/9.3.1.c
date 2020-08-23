#include<stdio.h>
int main()
{
    char ch,A,a,Z,z;
    if(ch>=A&&ch<=Z)
    {
        printf("%s",ch);
    }
    if(ch>=a&&ch<=z)
    {
        printf("%s",ch);
    }
    else
    {
        printf("It is not in the list");
    }
    return 0;
}
