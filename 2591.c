#include<stdio.h>
#include<string.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        char s[250];
        scanf("%s", s);
        for (j = 1; j < strlen(s); j++) {
            if (s[j] == 'a' && c == 0) {
                a++;
            } else if (s[j] == 'a' && c > 0) {
                b++;
            } else {
                c++;
            }
        }
        printf("k");
        for (j = 0; j < (a * b); j++) {
            printf("a");
        }
        printf("\n");
    }
    return 0;
}
