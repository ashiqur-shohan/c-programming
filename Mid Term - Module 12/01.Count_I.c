#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    int odd=0,even=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        
    }
    printf("%d %d",even,odd);
    
    return 0;
}