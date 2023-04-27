#include<stdio.h>
int main()
{
    int pass=1999,a;
    while(1)
    {
        scanf("%d",&a);
        if (pass==a)
        {
            printf("Correct");
            break;
        }
        else
        {
            printf("Wrong\n");

        }
        
        //phitron er dekhano niyom
        // int n ;
        // while (scanf("%d",&n) != EOF)
        // {
        //     if(n==1999)
        //     {
        //         printf("Correct");
        //         break;
        //     }
        //     else
        //     {
        //         printf("Wrong\n");
        //     }
        // }
        

    }
    return 0;
}