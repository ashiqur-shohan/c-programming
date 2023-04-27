#include<stdio.h>
#include<string.h>
int main()
{
    char name[22];
    // gets(name); // ei vhabe input neyar karon normally input nile space shoho kaj krbe na.
    fgets(name,20,stdin); // eita arek method input neyar sting er. first a array name,
                          // second a size, third stdin likhtei hbe 
    // ami amar iccha moto print off kore dite prbo 
    name[8]='\0';
    printf("%s",name);
    return 0;
}