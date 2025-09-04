#include <stdio.h>
int main()
{
    char str[100];
    int i=0;
    int len=0;
    char temp;
    printf("entrer la chaine:");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        len++;
        i++;
    }
    i=0;
    while(i<=len/2)
    {
        temp=str[i];
        str[i]=str[len-1];
        str[len-1]=temp;
        i++;
        len--;
    }
    printf("%s",str);
}
