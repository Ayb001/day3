#include <stdio.h>
int main(){
char str[100], result[100];
int i,j=0;
printf("Entrer une chaîne : ");
scanf(" %s", str);
for(i=0; str[i]; i++) if(str[i] != ' ') result[j++] = str[i];
result[j]='\0';
printf("%s\n", result);
return 0;
}