#include<stdio.h>
#include<time.h>
int factorial(int a)
{
    int fact=1;
    for (int i = 2; i <= a; i++)
    {
        fact=fact*i;
    }   
    return fact;
}
int main()
{
    int n,r;
    
    scanf("%d %d",&n,&r);
    int nfact= factorial(n);
    int rfact= factorial(r);
    int nrfact= factorial(n-r);
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}