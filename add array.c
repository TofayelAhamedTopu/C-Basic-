#include<stdio.h>
#include<string.h>
main()
{
    char str1[100],str2[100];
    int i,j;
    printf("Enter The 1st Array= \n");
    gets(str1);
    printf("Enter The 2nd Array= \n");
    gets(str2);
    i=-1;
    while(str1[++i]);
    j=0;
    while(str1[i++]=str2[j++]);
    printf("Two Array= %s\n",str1);
}
