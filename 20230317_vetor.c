#include<stdio.h>

int main() {

    int v[10];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    int maior = v[0];

    for (i = 1; i < 10; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("%d\n", maior);

    return 0;
}





