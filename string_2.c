#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {

    char nome[20], sobrenome[20];

    scanf("%s %s", nome, sobrenome);

    strcat(nome, " ");
    strcat(nome, sobrenome);

    printf("%s\n", nome);

    return 0;
}
