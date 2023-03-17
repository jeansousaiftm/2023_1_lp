#include<stdio.h>

int main() {

    int n, i, x, t = 1;
    scanf("%d", &n);

    while (n > 0) {

        for (i = 1; i <= n; i++) {
            scanf("%d", &x);
            if (i == x) {
                printf("Teste %d\n", t++);
                printf("%d\n\n", i);
            }
        }

        scanf("%d", &n);
    }

    return 0;
}
