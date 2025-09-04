#include <stdio.h>
int main()
{
    int i=0;
    char str[100];
    printf("entrer la cahine:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("la longeur est %d",i);
}
