#include<stdio.h>
int main()
{
    int tk,_1000=0,_500=0,_200=0,_100=0,_50=0,_20=0,_10=0,_5=0,_2=0;
    int _1=0;
    scanf("%d",&tk);
    // printf("%d",_1);
    if (tk>=1000)
    {
        _1000=tk/1000;
        tk = tk - 1000*_1000;
    }
    if (tk>=500)
    {
        _500 = tk/500;
        tk = tk - 500*_500;
    }
    if (tk>=200)
    {
        _200=tk/200;
        tk=tk-200*_200;
    }
    if (tk>=100)
    {
        _100=tk/100;
        tk=tk-100*_100;
    }
    if (tk>=50)
    {
        _50=tk/50;
        tk=tk-50*_50;
    }
    if (tk>=20)
    {
        _20=tk/20;
        tk=tk-20*_20;
    }
    if (tk>=10)
    {
        _10=tk/10;
        tk=tk-10*_10;
    }
    if (tk>=5)
    {
        _5=tk/5;
        tk=tk-5*_5;
    }
    if (tk>=2)
    {
        _2=tk/2;
        tk=tk-2*_2;
    }
    if (tk==1)
    {
        _1=tk;
    }

    printf("Total number of notes:\n");
    printf("1000: %d\n",_1000);
    printf("500 : %d\n",_500);
    printf("200 : %d\n",_200);
    printf("100 : %d\n",_100);
    printf("50  : %d\n",_50);
    printf("20  : %d\n",_20);
    printf("10  : %d\n",_10);
    printf("5   : %d\n",_5);
    printf("2   : %d\n",_2);
    printf("1   : %d\n",_1);
    return 0;
}