#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[n];
    int i;

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for (i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}
