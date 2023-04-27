#include<stdio.h>
int main()
{
    char array[1000000];
    scanf("%s",array);
    int count=0;
    for (int i = 0; array[i] != '\0'; i++)
    {
        count+=(array[i]-'0');
    }
    printf("%d",count);
    return 0;
}