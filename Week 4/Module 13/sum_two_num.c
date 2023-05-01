#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int x,flag=0;
    scanf("%d",&x);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]+array[j]==x)
            {
                flag=1;
            }
        }
        
    }
    if (flag==0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES");
    }
    return 0;
}