#include<stdio.h>
main()
{
    int i,k,*n,sum=0;
    scanf("%d",&k);
    n=(int*)malloc(k*sizeof(int));
    for(i=0; i<k; i++)
        scanf("%d",(n+1));
    sum=sum+ *(n+i);
    printf("%d\n",sum);
}
