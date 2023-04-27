#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array_1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array_1[i]);
    }
    int m;
    scanf("%d",&m);
    int array_2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&array_2[i]);
    }
    int array_copy[m+n];
    for (int i = 0; i < n; i++)
    {
        array_copy[i]=array_1[i];
    }
    int i=n;
    for (int j = 0; j < m; j++)
    {
        array_copy[i]=array_2[j];
        i++;
    }
    for (int k = 0; k < n+m ; k++)
    {
        printf("%d ",array_copy[k]);
    }
    return 0;
}