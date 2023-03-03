#include<stdio.h>

int main() {

    int m, n, menor, maior, i, soma;

    scanf("%d %d", &m, &n);

    while (m > 0 && n > 0) {

        soma = 0;

        if (m < n) {
            menor = m;
            maior = n;
        } else {
            menor = n;
            maior = m;
        }

        //printf("%d %d\n", menor, maior);

        for (i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i; //soma = soma + i
        }
        printf("Sum=%d\n", soma);

        scanf("%d %d", &m, &n);
    }


    return 0;
}
