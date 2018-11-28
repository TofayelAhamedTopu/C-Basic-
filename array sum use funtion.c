#include<stdio.h>
main()
{
    int i,n,array[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("%d",sum(array,n));
}
int sum(int array[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
 sum=sum+array[i];
 return sum;
}

