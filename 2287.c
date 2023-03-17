#include<stdio.h>

int main() {

    int n, i, z, j, d, t = 1;

    scanf("%d", &n);

    while (n > 0) {

        printf("Teste %d\n", t++);
        d = 0;

        for (i = 1; i <= n; i++) {
            scanf("%d %d", &j, &z);
            d += (j - z);
            printf("%d\n", d);
        }

        printf("\n");

        scanf("%d", &n);
    }

    return 0;
}
