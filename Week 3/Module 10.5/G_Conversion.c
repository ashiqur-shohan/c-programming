#include<stdio.h>
#include<string.h>
int main()
{
    char stri[100001];
    int st;
    scanf("%s",stri);
    st=strlen(stri);
    for (int i = 0; i < st; i++)
    {
        if ('a'<=stri[i] && 'z'>=stri[i])
        {
            int tmp=stri[i]-32;
            printf("%c",tmp);
        }
        else if ('A'<=stri[i] && 'Z'>=stri[i])
        {
            int tmp=stri[i]+32;
            printf("%c",tmp);
        }
        else if (stri[i]==',')
        {
            printf(" ");
        }
        
    }
    
    return 0;
}