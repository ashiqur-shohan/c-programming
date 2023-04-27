#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int min=INT_MAX,max=INT_MIN;
    int min_in=0,max_in=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
            min_in=i;
        }
        if (array[i]>max)
        {
            max=array[i];
            max_in=i;
        }
    }
    array[min_in]=max;
    array[max_in]=min;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}