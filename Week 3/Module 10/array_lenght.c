#include<stdio.h>
#include<string.h>
int main()
{
    char array[100];
    scanf("%s",array);
    // int count=0;
    // for (int i = 0; array[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // ei kaj tar jonno function ache
    int st=strlen(array);
    printf("%d",st);
    return 0;
}