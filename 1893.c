#include<stdio.h>
int main() {

    int l1, l2;

    scanf("%d %d", &l1, &l2);

    if (l2 >= l1) {
        if (l2 <= 2) {
            printf("nova\n");
        } else if (l2 <= 96) {
            printf("crescente\n");
        } else {
            printf("cheia\n");
        }
    } else {
        if (l2 <= 2) {
            printf("nova\n");
        } else if (l2 <= 96) {
            printf("minguante\n");
        } else {
            printf("cheia\n");
        }
    }

    return 0;
}
