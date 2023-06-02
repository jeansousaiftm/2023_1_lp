#include<stdio.h>
#include<string.h>

int main() {

    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {

        char r[10], s[10];
        int g = 0;
        scanf("%s %s", r, s);

        if (strcmp(r, "tesoura") == 0) {
            if (strcmp(s, "papel") == 0 ||
                strcmp(s, "lagarto") == 0) {
                g = 1;
            } else if (strcmp(s, "pedra") == 0 ||
                       strcmp(s, "spock") ==0) {
                g = 2;
            }
        }

        if (strcmp(r, "papel") == 0) {
            if (strcmp(s, "pedra") == 0 ||
                strcmp(s, "spock") == 0) {
                g = 1;
            } else if (strcmp(s, "lagarto") == 0 ||
                       strcmp(s, "tesoura") ==0) {
                g = 2;
            }
        }

        if (strcmp(r, "pedra") == 0) {
            if (strcmp(s, "lagarto") == 0 ||
                strcmp(s, "tesoura") == 0) {
                g = 1;
            } else if (strcmp(s, "papel") == 0 ||
                       strcmp(s, "spock") ==0) {
                g = 2;
            }
        }

        if (strcmp(r, "lagarto") == 0) {
            if (strcmp(s, "spock") == 0 ||
                strcmp(s, "papel") == 0) {
                g = 1;
            } else if (strcmp(s, "tesoura") == 0 ||
                       strcmp(s, "pedra") ==0) {
                g = 2;
            }
        }

        if (strcmp(r, "spock") == 0) {
            if (strcmp(s, "tesoura") == 0 ||
                strcmp(s, "pedra") == 0) {
                g = 1;
            } else if (strcmp(s, "lagarto") == 0 ||
                       strcmp(s, "papel") ==0) {
                g = 2;
            }
        }

        if (g == 0) {
            printf("empate\n");
        } else if (g == 1) {
            printf("rajesh\n");
        } else if (g == 2) {
            printf("sheldon\n");
        }

    }

    return 0;
}
