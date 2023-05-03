#include<stdio.h>
void fun(int x)
{
    printf("fun x er address - %p\n ",&x);
}
int main()
{
    int x=10;
    int* ptr=&x;
    int* ptr_2=&ptr;
    *ptr_2=100;
    printf("main x er address - %p\n ",&x);
    printf("x er Value - %d\n ",x);
    printf("nain ptr er Value - %d\n ",ptr);

    fun(x);
    return 0;
}
