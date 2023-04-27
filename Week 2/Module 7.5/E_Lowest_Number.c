#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array [n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int num= INT_MAX,index=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]<num)
        {
            num=array[i];
            index=i+1;
        }
        
    }
    printf("%d %d",num,index);
    return 0;
}