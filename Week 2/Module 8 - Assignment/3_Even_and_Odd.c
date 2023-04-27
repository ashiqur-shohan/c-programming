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
    int sum_even=0,sum_odd=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            sum_even+=array[i];
        }
        else
        {
            sum_odd+=array[i];
        }
    }
    printf("%d %d",sum_even,sum_odd);
    return 0;
}