#include<stdio.h>

int main() {

    int a;
    double b;
    char c; // comentário

    scanf("%d", &a); //ler inteiro (%i)
    scanf("%lf", &b); //ler double
    scanf("%c", &c); //ler caractere

    printf("Hello World");

    printf("%d %.3lf %c\n", a, b, c);

    return 0;
}
