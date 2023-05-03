#include<stdio.h>
void fun(int* p)
{
    *p = 500;
    // printf("P er value - %p\n",p);
}
int main()
{
    int x=100;
    // printf("x er address - %p\n",&x);
    fun(&x);
    printf("%d",x);
    return 0;
}