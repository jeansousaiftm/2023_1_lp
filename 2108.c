#include<stdio.h>
#include<string.h>

int main() {
    int maior = 0;
    char s[200], m[200];
    scanf("%[^\n]%*c", s);
    while (strcmp(s, "0") != 0) {
        int i, c = 0;
        for (i = 0; i < strlen(s); i++) {
            if (s[i] == ' ') {
                printf("%d-", c);

                if (c >= maior) {
                    int j = i - c, k = 0;
                    while (c > 0) {
                        m[k] = s[j];
                        k++;
                        j++;
                        c--;
                    }
                    m[k] = '\0';
                    maior = strlen(m);
                }

                c = 0;

            } else {

                c++;

            }
        }
        printf("%d\n", c);

        if (c >= maior) {
            int j = i - c, k = 0;
            while (c > 0) {
                m[k] = s[j];
                k++;
                j++;
                c--;
            }
            m[k] = '\0';
            maior = strlen(m);
        }


        scanf("%[^\n]%*c", s);
    }
    printf("\nThe biggest word: %s\n", m);
}
