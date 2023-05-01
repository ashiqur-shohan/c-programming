//(Return + parameter) type function

#include<stdio.h>
int sum(int x, int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int s=sum(10,20);
    printf("%d\n",s);
    printf("%d",sum(117,57));
    return 0;
}