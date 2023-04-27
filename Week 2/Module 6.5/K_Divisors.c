#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    for (int i = 1; i <= var; i++)
    {
        if (var%i==0)
        {
            printf("%d\n",i);
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}