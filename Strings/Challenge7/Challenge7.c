#include <stdio.h>
#include <string.h>
int main(){
char str[100];
int i;
printf("Entrer une chaîne : ");
scanf(" %s", str);
for(i=0; str[i]; i++){
if(str[i] >= 'a' && str[i] <= 'z') str[i] = str[i] - 32;
}
printf("%s\n", str);
return 0;
}