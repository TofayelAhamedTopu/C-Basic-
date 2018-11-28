#include<stdio.h>
main()
{
    int i,n,mx,a[100];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("%d",max(a,n));
}
int max(int a[],int n)
{
    int i,mx=a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>mx)
            mx=a[i];
    }
    return mx;
}


