#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000], word;
    int i,length,is_word_started;
    gets(s);
    length=strlen(s);
    is_word_started=0;
    printf("\n\n");
    for(i=0;i<length;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
                word='A'+s[i]-'a'; //First character capitalized
                printf("%c",word);
            }
            else
            {
                printf("%c",s[i]);
            }
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            printf("%c",s[i]);
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            if(is_word_started==0)
            {
                is_word_started=1;
            }
            printf("%c",s[i]);
        }
        else
        {
            if(is_word_started==1)
            {
                is_word_started=0;
                word='\0';
                printf("\n\n");
            }
        }
    }
    printf("\n");
    return 0;
}
