#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char senha[100];

    scanf("%s", senha);
    //printf("%s\n", senha);

    while (strcmp(senha, "2002") != 0) {
        printf("Senha Invalida\n");
        scanf("%s", senha);
    }

    printf("Acesso Permitido\n");

    return 0;
}
