#include<stdio.h>

void imprimirVetor(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    scanf("%d", &n);
    int v[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    imprimirVetor(v, n);

    for (i = 0; i < n; i++) {
        if (v[i] < 0) {
            v[i] = 0;
        }
    }

    imprimirVetor(v, n);

    return 0;
}
