#include<stdio.h>
int main()
{
    int n,a;
    int even=0,odd=0,pos=0,neg=0;

    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&a);
        if (a%2==0 || a==0)
        {
            even =even+1;
        }
        if (a%2!=0)
        {
            odd = odd +1 ;
        }
        if (a>0)
        {
            pos=pos+1;
        }
        if (a<0)
        {
            neg=neg+1;
        }
        

    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}