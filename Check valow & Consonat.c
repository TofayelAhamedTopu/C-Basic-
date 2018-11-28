#include<stdio.h>
#include<string.h>
main()
{
    char str[100];
    gets(str);
    int i,vol=0,cns=0;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            cns++;
        }
        if(str[i]=='A'|| str[i]=='E' || str[i]=='O' || str[i]=='I' || str[i]=='U')
        {
            vol++;
        }
    }
    printf("Vowel = %d\n", vol);
    printf("Cons = %d", cns-vol);

    }
