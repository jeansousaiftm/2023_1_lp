#include<stdio.h>
#include<string.h> // https://cplusplus.com/reference/cstring/
#include<ctype.h> // https://cplusplus.com/reference/ctype/

int main() {
    int n, i, j;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        char s[101];
        scanf("%s", s); // fgets(s, 100, stdin);
        for (j = strlen(s) - 1; j >= 0; j--) {
            if (islower(s[j])) {
                printf("%c", s[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
