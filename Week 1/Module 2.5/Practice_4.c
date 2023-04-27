#include<stdio.h>
int main()
{
    int var;
    scanf("%d",&var);
    if (var>0)
    {
        printf("positive");
    }
    else if (var<0)
    {
        printf("negative");
    }
    else 
    {
        printf("zero");
    }
}