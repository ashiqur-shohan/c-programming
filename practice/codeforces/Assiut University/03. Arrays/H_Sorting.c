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
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-1-j; i++)
        {
            if (array[i]>array[i+1])
            {
            int tmp=array[i];
            array[i]=array[i+1];
            array[i+1]=tmp;
            }
        
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}