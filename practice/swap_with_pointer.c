#include<stdio.h>
void swap(int* x,int* y){
    int temp;
    temp = *x; //ekhane *x = a er value input nicche. 
    *x=*y;
    *y=temp;
    return;
}
int main()
{
    int a,b;
    printf("Enter First Value: ");
    scanf("%d",&a);
    printf("Enter Second Value: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("First Value is: %d\n",a);
    printf("Second Value is: %d",b);
    return 0;
}