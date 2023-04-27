#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d %d",&n, &q);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        scanf("%d",&x);
        int c=0;
        for (int j = 0; j < n; j++)
        {
            if (array[j]==x)
            {
                printf("found\n");
                c=1;
                break;
            }
        }
        if (c==0)
        {
            printf("not found");
        }   
    }
    return 0;
}