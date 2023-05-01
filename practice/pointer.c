#include<stdio.h>
int main()
{
    int n=10;
    int* b=&n; //int* dara pointer format bujay. pointer memory location hold kore
    printf("%p",b); // ekhane %p holo location specifier. ekhane n er address print kora hoyeche.
    printf("%d",*b); // *b dara bujacche 'b' er moddeh jei address ache shei address er value print krte.
    return 0;
}