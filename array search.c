#include<stdio.h>
main()
{
    int i,j,n,loc,ck,key,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&key);
    loc=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==key)

    {
       ck=1;
       loc=i+1;
    }
    }
if(ck==1)
    printf("Position= %d\n",loc);

else
    printf("No");
return 0;
}
