#include<stdio.h>
int main()
{
    int ar[5];
    //for input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ar[i]);
    }
    //for output
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    return 0;
}