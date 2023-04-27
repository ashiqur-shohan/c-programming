#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    int x,sum=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            printf("%d",i);
            sum+=1;
            break;
        }
        
    }
    if(sum==0)
        {
        printf("-1");
        
        }
    return 0;
}