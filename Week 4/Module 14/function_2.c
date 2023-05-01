// (return + no parameter) type function
#include<stdio.h>
// ekhane parameter dile igonore krbe
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
// ekhane parameter dile program run krbe na
// baki sob same
// int sum(void)
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int s=a+b;
//     return s;
// }
int main()
{
    int s =sum(); // ekhane function call korar sathe fucntion a dhuke jabe
                  // ebong function er vhitorei input niye kaj kore uttor diye dibe
    printf("%d",s);
    return 0;
}