#include<stdio.h>
#include<string.h>
int is_palindrome(char a[])
{
    int len=strlen(a)-1,c=0;
    for (int i = 0; i < strlen(a)/2 ; i++)
    {
        if (a[i]!=a[len])
        {
            c++;
            break;
        }
        len--;
    }
    if (c==0)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    return c;
}
int main()
{
    char str[100];
    scanf("%s",str);
    int palin=is_palindrome(str);
    if (palin==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    
    return 0;
}