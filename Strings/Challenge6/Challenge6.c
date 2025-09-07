#include <stdio.h>
int main()
{
    char str1[100];
    int i=0;
    char c;
    int count=0;
    printf("entrer la chaine:");
    scanf(" %s",str1);
    printf("entrer le Caractère chercher:");
    scanf(" %c",&c);
    while(str1[i]!='\0')
    {
        if(str1[i]==c)
        {
            count++;
        }
        i++;
    }
    printf("le nombre d'occurence de %c est: %d",c,count);
}   
