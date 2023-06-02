#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    int n, i;
    scanf("%d%*c", &n);
    for (i = 0; i < n; i++) {

        int j, v[128];

        for (j = 0; j < 128; j++) {
            v[j] = 0;
        }

        char s[250];
        scanf("%[^\n]%*c", s);

        for (j = 0; j < strlen(s); j++) {
            v[tolower(s[j])]++;
        }

        int maior = 0;

        for (j = 97; j <= 122; j++) {
            if (v[j] > maior) {
                maior = v[j];
            }
        }

        for (j = 97; j <= 122; j++) {
            if (v[j] == maior) {
                printf("%c", j);
            }
        }
        printf("\n");
    }
    return 0;
}
