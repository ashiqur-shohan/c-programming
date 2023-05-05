#include<stdio.h>

int count_before_zero(int array[],int n)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]==0)
        {
            break;
        }
        c++;
    }
    return c;

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
    int count= count_before_zero(array,n);
    printf("%d",count);
    return 0;
}