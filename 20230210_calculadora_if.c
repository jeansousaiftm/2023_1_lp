#include<stdio.h>
int main() {

    int a, b;
    char op;

    scanf("%d%c%d", &a, &op, &b);

    if (op == '+') {
        int soma = a + b;
        printf("%d + %d = %d\n", a, b, soma);
    } else if (op == '-') {
        int subtracao = a - b;
        printf("%d - %d = %d\n", a, b, subtracao);
    } else if (op == '*') {
        int multiplicacao = a - b;
        printf("%d * %d = %d\n", a, b, multiplicacao);
    } else if (op == '/') {
        double divisao = (double) a / (double) b;
        printf("%d / %d = %lf\n", a, b, divisao);
    } else {
        printf("Operacao invalida\n");
    }

    return 0;
}
