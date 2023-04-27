#include<stdio.h>
#include<limits.h>
int main()
{
    int n,a,max=0;
    // nicher maddhome shb theke choto & shb theke boro int dclare 
    // kora jay.
    // int a=INT_MAX,b=INT_MIN;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        if (max<=a)
        {
            max=a;
        }
        else
        {
            continue;
        }

    }
    printf("%d",max);
    return 0;
}