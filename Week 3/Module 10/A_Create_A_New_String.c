#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000],T[1000];
    scanf("%s",S);
    scanf("%s",T);
    int len_S,len_T;
    len_S=strlen(S);
    len_T=strlen(T);
    printf("%d %d\n",len_S,len_T);
    printf("%s %s",S,T);
    return 0;
}