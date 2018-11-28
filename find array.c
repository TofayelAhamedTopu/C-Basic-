#include<stdio.h>
main()
{
    int i,n,key,cnt=0,a[100];
    scanf("%%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0; i<n; i++)
    {
        if(a[i]==key)

            printf("%d",i);
    }
}

