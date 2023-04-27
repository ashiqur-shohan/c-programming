#include<stdio.h>
#include<string.h>
int main()
{
    char array[1000000];
    gets(array);
    for (int i = 0; array[i] != '\\'; i++)
    {
        printf("%c",array[i]);
    }
    
    
    return 0;
}