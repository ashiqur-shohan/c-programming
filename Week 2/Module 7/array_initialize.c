#include<stdio.h>
int main()
{
    //array initializaion a array er size declare na krle o hoy. joto value deya hbe
    //to to size create kre nibe
    int ar[]={10,5,6,8,9};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    //ekhane size 5 declare kore o value disi ekta baki gula tai auto 0 boshay nibe
    int array [5]={0};
    for (int q = 0; q < 5; q++)
    {
        printf("%d\n",array[q]);
    }
    
    return 0;
}