#include<stdio.h>
#include<string.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s[1000];
    scanf("%s",s);
    int k=0;
    for (int i = 0; i < a; i++)
    {
        int tmp=s[i]-'0';
        if (tmp>=0 && tmp<=9)
        {
            continue;
        }
        else
        {
            k=1;
        }
    }
    if (k==0)
    {
        for (int i = a+1; i < strlen(s); i++)
        {
            int tmp=s[i]-'0';
            if (tmp>=0 && tmp<=9)
            {
                continue;
            }
            else
            {
                k=1;
            }
        }
        
    }
    
    
    if (s[a]=='-' && k==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}