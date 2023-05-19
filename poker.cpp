#include<stdio.h>

int main() {
    int n, x, i, minimo = 100;
    char resp = 'S';
    int v[14];
    scanf("%d", &n);
    for (i = 1; i <= 13; i++) {
        v[i] = 0;
    }
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        v[x]++;
        if (x < minimo) {
            minimo = x;
        }
    }
    for (i = minimo; i <= minimo + 4; i++) {
        if (v[i] == 0) {
            resp = 'N';
        }
    }
    printf("%c\n", resp);
    return 0;
}
