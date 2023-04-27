#include<stdio.h>
#include<string.h>
int main()
{
    char array[1001],array1[1001];
    int len_array;
    scanf("%s",array);
    len_array=strlen(array);
    int end=len_array-1;
    for (int i = 0; i < len_array; i++)
    {
        array1[i]=array[end];
        end--;
    }
    array1[len_array]='\0';
    int stop=0;
    for (int i = 0; i < len_array; i++)
    {
        if (array[i]!=array1[i])
        {
            stop=1;
            break;
        }
        
    }
    if (stop==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    
    
    return 0;
}