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
    clock_t start,end;
    start= clock();
    int n,r;
    scanf("%d %d",&n,&r);
    int nfact= factorial(n);
    int rfact= factorial(r);
    int nrfact= factorial(n-r);
    int ncr=nfact/(rfact*nrfact);
    printf("%d",ncr);
    end = clock();
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}