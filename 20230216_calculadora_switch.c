#include<stdio.h>
int main() {

    int a, b, soma, subtracao, multiplicacao;
    double divisao;
    char op;

    scanf("%d%c%d", &a, &op, &b);

    switch (op) {
        case '+':
            soma = a + b;
            printf("%d + %d = %d\n", a, b, soma);
            break;
        case '-':
            subtracao = a - b;
            printf("%d - %d = %d\n", a, b, subtracao);
            break;
        case '*':
            multiplicacao = a * b;
            printf("%d * %d = %d\n", a, b, multiplicacao);
            break;
        case '/':
            divisao = (double) a / (double) b;
            printf("%d / %d = %lf\n", a, b, divisao);
            break;
        default:
            printf("Operacao invalida\n");
    };

    return 0;
}
