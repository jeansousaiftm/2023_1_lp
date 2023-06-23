#include<stdio.h>
#include<math.h>

double funcao01(double a, double b, double c) {
    double delta = (b * b) - (4 * a * c);
    return delta;
}

int funcao02(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

void funcao03(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int funcao04(int a, int b, int c) {
    int pares = 0;
    if (a % 2 == 0) {
        pares++;
    }
    if (b % 2 == 0) {
        pares++;
    }
    if (c % 2 == 0) {
        pares++;
    }
    return pares;
}

double funcao05(double a1, double an, double n) {
    double pa = (n * (a1 + an)) / 2;
    return pa;
}

int funcao06(double a, double b) {
    if (a == b) {
        return 1;
    } else {
        return 0;
    }
}

int funcao07(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    int menor = a;
    if (b < menor) {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    return maior + menor;
}

double funcao08(double c, int m, double t) {
    double j = c * m * (t / 100); // t = 1%
    // double j = c * m * t; t = 0.01
    return j;
}

void funcao09(double a, double b, double c) {
    double delta = funcao01(a, b, c);
    if (delta < 0) {
        printf("Nao existe raizes\n");
    } else if (a == 0) {
        double x = (-c) / b;
        printf("x = %.1lf\n", x);
    } else if (delta == 0) {
        double x = (-b) / (2 * a);
        printf("x = %.1lf\n", x);
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.1lf x2 = %.1lf\n", x1, x2);
    }
}

int funcao10(int a, int b) {
    int soma = 0, i;
    for (i = a; i <= b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

void funcao11(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    funcao11(66);
    return 0;
}
