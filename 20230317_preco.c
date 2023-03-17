#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int qtd[n];
    double unit[n];
    int i;
    double total = 0;

    for (i = 0; i < n; i++) {
        scanf("%d %lf", &qtd[i], &unit[i]);
        total += (qtd[i] * unit[i]);
    }

    printf("%.2lf\n", total);

    return 0;
}
