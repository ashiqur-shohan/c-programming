#include <stdio.h>
int main()
{
    int a, b;
    char s;
    // method 1 to print % after the numeric
    // scanf("%d%c", &a, &s);
    // printf("%d%c", a, s);

    scanf("%d%% %d%%",&a,&b);
    printf("%d%% %d%%",a,b);    

    // //in this way it won't input %. it will automatic print %
    // scanf("%d %d", &a, &b);
    // printf("%d%% %d%%", a, b);
    return 0;
}