#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b,c,kat=0;
    int min= INT_MAX;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=min)
    {
        min=a;
    }
    
    if (b<=min)
    {
        min=b;
    }

    if (c<=min)
    {
        min=c;
    }
    printf("%d",min);
    return 0;

}