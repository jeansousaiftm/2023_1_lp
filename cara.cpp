#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n > 0) {
        int m = 0, j = 0, i, x;
        for (i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x == 0) {
                m++;
            } else {
                j++;
            }
        }
        printf("Maria %d Joao %d\n", m, j);
        scanf("%d", &n);
    }
    return 0;
}
