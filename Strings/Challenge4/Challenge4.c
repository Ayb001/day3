#include <stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    int i=0;
    int c=0;
    printf("entrer la premiere chaine:");
    scanf("%s",str1);
    printf("entrer la deuxieme chaine:");
    scanf("%s",str2);
    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i]!=str2[i])
        {
            c=1;
            break;
        }
        c=0;
        i++;
    }
    if(c==1)
    {
        printf("diferent string");
    }
    else
    {
        printf("meme string");
    }

}
