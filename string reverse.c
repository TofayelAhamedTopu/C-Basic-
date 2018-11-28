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
   // printf("string Length= %d\n",length);
    for(i=length-1;i>=0;i--)
    {
      printf("%c",st[i]);
    }

    return 0;
}
