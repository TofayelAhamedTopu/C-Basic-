#include<stdio.h>
main()
{
    char str[10][100];
    int i,n, l=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
        l++;
    }


    for(i=l-1;i>=0;i--)
       printf("%s",str[i]);
       printf("\n");


       printf("\n\t\tHAPPY CODEING");

}
