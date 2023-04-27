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
    int array_2[10]={0};
    for (int i = 0; i < 13; i++)
    {
        array_2[array[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d - %d\n",i,array_2[i]);
    }
    
    return 0;
}