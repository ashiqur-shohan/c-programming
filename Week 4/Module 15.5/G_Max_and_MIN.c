#include<stdio.h>
void min_max(int array[],int n)
{
    int min=100001,max=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    min_max(array,n);
    
    return 0;
}