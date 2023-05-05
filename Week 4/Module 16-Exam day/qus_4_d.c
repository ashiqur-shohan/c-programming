#include<stdio.h>
void multiplier(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    multiplier(n);
    return 0;
}