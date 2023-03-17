#include<stdio.h>

int main() {

    int i, qtd = 0;
    double soma = 0;

    scanf("%d", &i);
    while (i >= 0) {
        soma += i;
        qtd++;
        scanf("%d", &i);
    }

    double media = soma / qtd;
    printf("%.2lf\n", media);

    return 0;
}
