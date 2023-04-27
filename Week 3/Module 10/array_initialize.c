#include<stdio.h>
int main()
{
    // char array[6]={'S','h','o','h','a','n'};  old method
    char array[]="Shohan"; //ei vhabe chaile string ke initialize krte pri. size ek beshi dite hoy
                            // karon "\0" eida hoilo end of string. eita shb somoy thke.

    //print without loop
    int size= sizeof(array);
    printf("%d\n",size);
    printf("%s",array);
    
    
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%c",array[i]);
    // }
    
    return 0;
}