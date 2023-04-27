#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int cap=0,small=0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            small++;
        }
        else if (str[i]>='A' && str[i]<='Z')
        {
            cap++;
        }
        
    }
    printf("%d %d",cap,small);
    return 0;
}