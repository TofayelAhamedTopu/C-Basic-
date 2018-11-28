#include<stdio.h>
int main()
{
    char *p[4]={"ab","bc","cd","ef"};
    int i;
    char *c1;
    c1=p[0];
    p[0]=p[2];
    p[2]=c1;
    for(i=0; i<4; i++);
    printf("%s",*(p+i));
}
