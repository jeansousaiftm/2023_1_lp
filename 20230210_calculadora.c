#include<stdio.h>

int main() {

    int a, b, soma = 0, subtracao = 0, multiplicacao = 0;
    double divisao = 0;

    scanf("%d %d", &a, &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = (double) a / (double) b;

    printf("%d + %d = %d\n", a, b, soma);
    printf("%d - %d = %d\n", a, b, subtracao);
    printf("%d * %d = %d\n", a, b, multiplicacao);
    printf("%d / %d = %lf\n", a, b, divisao);

    return 0;
}
