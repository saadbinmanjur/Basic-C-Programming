#include<stdio.h>
int main()
{
    char country[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    int i=0,length=10;
    printf("\n\n%s\n\n",country);
    for( ;i<length;i++)
    {
        if(country[i]>=97&&country[i]<=122)
        {
            country[i]='A'+(country[i]-'a'

                            );
        }
    }
    printf("\n\n%s\n\n",country);
    return 0;
}
