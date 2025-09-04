#include <stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("entrer la chaine:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
