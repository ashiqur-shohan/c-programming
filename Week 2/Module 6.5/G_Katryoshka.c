#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b,c,kat=0;
    int min= INT_MAX;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=min)
    {
        min=a;
    }
    
    if (b<=min)
    {
        min=b;
    }

    if (c<=min)
    {
        min=c;
    }
    
    if (a==0)
    {
        printf("0\n");
    }
    else
    {
        if (b!=0)
        {
            if (a==min)
            {
                kat=a;
                a= a - min;
                
            }
            else if (b==min)
            {
                a=a-min;
                kat=min;
                b=b-min;
                c=c-min;
                
            }
            
            else
            {
                a=a-min;
                kat=min;
                b=b-min;
                c=c-min;
                
            }
        }
        if (2*a>=c && c>=(a/2))
        {
            
            kat=kat + (a/2);
            c=c-c;
            a=a-2*c;
        }
    printf("%d",kat);
 
    }
       
    return 0;
}