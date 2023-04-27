#include<stdio.h>
#include<string.h>
int main()
{
    int count[26]={0};
    char c;
    //ekhane EOF diye krsi karon. input size limit onk boro 
    //deya ache. eto boro string input nile onk somoy lgbe.
    //tai eof bebohar kore korechi.
   while(scanf("%c",&c) !=EOF)
    {
        
        int temp=c-'a';
        count[temp]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i]!=0)
        {
            printf("%c : %d\n",i+97,count[i]);
        }
        
    }
    
    
    return 0;
}