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
    int count=0,min=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<min)
        {
            min=array[i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]==min)
        {
            count++;
        }
        
    }
    if (count%2==0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}