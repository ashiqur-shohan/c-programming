#include<stdio.h>
int main()
{
    char var;
    scanf("%c",&var);
    if (var>='0' && var<='9')
    {
        printf("IS DIGIT\n");
    }
    else
    {
        printf("ALPHA\n");
        if (var>='a' && var<='z')
        {
            printf("IS SMALL");
        }
        else
        {
            printf("IS CAPITAL");
        }
        
    }
    
    return 0;
}