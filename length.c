#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    int length=0,i,j;
    gets(st);
    for(i=0; st[i]!='\0'; i++)
    {
        length++;
    }
    printf("string Length= %d\n",length);
    return 0;
}
