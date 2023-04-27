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
    int j=n-1,k=0;
    for (int i = 0; i < j; i++)
    {
        if (array[i]!=array[j])
        {
            k=1;
            break;
        }
        j--;
    }
    if (k==1)
    {
        printf("NO");
    }
    else 
    {
        printf("YES");
    }
    
    return 0;
}