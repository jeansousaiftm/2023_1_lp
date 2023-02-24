#include<stdio.h>

int main() {

    int idade, dias, meses, anos;

    scanf("%d", &idade);

    anos = idade / 365;
    idade = idade % 365;
    meses = idade / 30;
    dias = idade % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
