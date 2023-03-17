#include<stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int v[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int maior = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("%d\n", maior);

    return 0;
}





