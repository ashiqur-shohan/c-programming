// (no return + parameter)
#include<stdio.h>

void sum(int x, int y)
{
    int s = x+y;
    printf("%d",s); // ekhane jehetu kono return korte parbe na
                    // tai function er vhitorei kaj shesh kore dicchi.
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}