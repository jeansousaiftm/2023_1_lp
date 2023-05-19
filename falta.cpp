#include<stdio.h>

int main() {
    int n, x, i;
    int v[51];
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        v[i] = 0;
    }
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &x);
        v[x]++;
    }
    for (i = 1; i <= n; i++) {
        if (v[i] == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
