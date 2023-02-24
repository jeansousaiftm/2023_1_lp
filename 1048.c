#include<stdio.h>

int main() {

    double salario, aumento;
    scanf("%lf", &salario);

    if (salario <= 400) {
        aumento = 15;
    } else if (salario <= 800) {
        aumento = 12;
    } else if (salario <= 1200) {
        aumento = 10;
    } else if (salario <= 2000) {
        aumento = 7;
    } else {
        aumento = 4;
    }

    double reajuste = salario * (aumento / 100);
    double novo_salario = salario + reajuste;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %.0lf %%\n", aumento);

    return 0;
}
