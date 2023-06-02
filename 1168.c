#include<stdio.h>
#include<string.h>

int main() {

    int n, i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        int l = 0;
        char s[200];
        scanf("%s", s);
        for (j = 0; j < strlen(s); j++) {
            if (s[j] == '1') {
                l += 2;
            } else if (s[j] == '2' || s[j] == '3'
                       || s[j] == '5') {
                l += 5;
            } else if (s[j] == '4') {
                l += 4;
            } else if (s[j] == '6' || s[j] == '9'
                       || s[j] == '0') {
                l += 6;
            } else if (s[j] == '7') {
                l += 3;
            } else if (s[j] == '8') {
                l += 7;
            }

        }
        printf("%d leds\n", l);
    }

    return 0;
}
