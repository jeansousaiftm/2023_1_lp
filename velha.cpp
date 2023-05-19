#include<stdio.h>

int main() {
    char resp = 'E';
    int m[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        if (m[i][0] == m[i][1] && m[i][1] == m[i][2]) {
            if (m[i][0] == 1) {
                resp = 'O';
            } else if (m[i][0] == 2) {
                resp = 'X';
            }
        }
    }

    for (j = 0; j < 3; j++) {
        if (m[0][j] == m[1][j] && m[1][j] == m[2][j]) {
            if (m[0][j] == 1) {
                resp = 'O';
            } else if (m[0][j] == 2) {
                resp = 'X';
            }
        }
    }

    if ((m[0][0] == m[1][1] && m[1][1] == m[2][2]) ||
        (m[0][2] == m[1][1] && m[1][1] == m[2][0])) {
        if (m[1][1] == 1) {
            resp = 'O';
        } else if (m[1][1] == 2) {
            resp = 'X';
        }
    }

    printf("%c\n", resp);
    return 0;
}
