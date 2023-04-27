#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
    if (num==1)
    {
        printf("%d",-1);
    }
    else
    {
        for ( i = 2; i <= num; i++)
        {
            if (i%2==0)
            {
                printf("%d\n",i);
            }
            else
            {
                continue;
            }
        }
        
    }
    return 0;
}