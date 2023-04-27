#include<stdio.h>
int main ()
{
    int var;
    scanf("%d",&var);
    if (var>=10000)
    {
        printf("Gucci Bag\n");
        if (var>20000)
        {
            printf("Gucci Belt");
        }
        
    }
    else if (var>=5000)
    {
        printf("Levis Bag");
    }
    else
    {
        printf("Something");
    }

    return 0;
}