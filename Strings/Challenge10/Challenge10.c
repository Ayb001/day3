#include <stdio.h>
#include <string.h>

int main(){
    char str[100], sub[50];
    int i, j, trouve;
    
    printf("Entrer la chaîne principale : ");
    scanf(" %s", str);
    printf("Entrer la sous-chaîne : ");
    scanf(" %s", sub);

    int len_str = strlen(str);
    int len_sub = strlen(sub);
    trouve = 0;

    for(i = 0; i <= len_str - len_sub; i++){
        for(j = 0; j < len_sub; j++){
            if(str[i+j] != sub[j]) break;
        }
        if(j == len_sub){
            trouve = 1;
            break;
        }
    }

    if(trouve) printf("Sous-chaîne trouvée\n");
    else printf("Sous-chaîne non trouvée\n");

    return 0;
}
