#include<stdio.h>
float discount()
{
    int p,r; // t=price, r= dicount rate
    scanf("%d %d",&p,&r);
    float new_p= p-(p*r/100);
    return new_p;
}
int main()
{
    float new=discount();
    printf("Discounted price - %0.2f",new);
    return 0;
}