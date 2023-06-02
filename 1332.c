#include<stdio.h>
#include<string.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        char s[10];
        scanf("%s", s);
        if (strlen(s) == 5) {
            printf("3\n");
        } else {
            int c = 0;
            if (s[0] == 'o') c++;
            if (s[1] == 'n') c++;
            if (s[2] == 'e') c++;
            if (c >= 2) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }
    return 0;
}
