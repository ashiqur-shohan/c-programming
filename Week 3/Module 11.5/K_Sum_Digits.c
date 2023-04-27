#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%1d",&array[i]);
    }
   int count=0;
   for (int i = 0; i < n; i++)
   {
    count+=array[i];
   }
   printf("%d",count);
    
    return 0;
}