#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if (x=='z')
    {
        printf("a");
    }
    else
    {
        x+=1;
        printf("%c",x);
    }
    
    return 0;
}