#include <stdio.h>
int main(){
char str[100];
int i;
printf("Entrer une chaîne : ");
scanf(" %s", str);
for(i=0; str[i]; i++){
if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + 32;
}
printf("%s\n", str);
return 0;
}