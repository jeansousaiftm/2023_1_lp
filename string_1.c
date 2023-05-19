#include<stdio.h>
#include<string.h>
#include<ctype.h>
// https://cplusplus.com/reference/cstring/
// https://cplusplus.com/reference/cctype/

int main() {
    int i;
    char nome[50], teste[50];

    scanf("%[^\n]", nome);
    //scanf("%[a-z|A-Z]", nome);
    //scanf("%[0-9|.|-]", nome);
    printf("%s\n", nome);

    strcpy(teste, nome); // teste = nome;

    for (i = 0; i < strlen(teste); i++) {
        teste[i] = toupper(teste[i]);
        //teste[i] = tolower(teste[i]);
    }

    printf("%s\n", teste);
    printf("%d\n", strlen(nome));

    return 0;

}
