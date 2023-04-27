#include<stdio.h>
#include<ctype.h>
int main()
{
    char var;
    scanf("%c",&var);
    if (var>=97 && var<=122)
    {
        //ekhane ASCII num system a choto hater theke boro hater difference hoilo 32 
        int ans=var - 32;    
        printf("%c",ans);     
        // ekhne int variable hole o %c diyechi karon char value output chai                     
    }
    else 
    {
        int ans= var +32;
        printf("%c",ans);
    }
    
    
    
    //amar nijer niyom
    // char var;
    // scanf("%c",&var);
    // if (var>='a'&&var<='z')
    // {
    //     printf("%c",toupper(var));
    // }
    // else if (var>='A'&&var<='Z')
    // {
    //     printf("%c",tolower(var));
    // }
    // else
    // {
    //     printf("Not Alphabet");
    // }

    return 0;
}