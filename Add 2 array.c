#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    i=-1;
    while(str1[++i]);
    j = 0;
    while(str1[i++] = str2[j++]);

    printf("Concatenated string = %s", str1);

    return 0;
}
