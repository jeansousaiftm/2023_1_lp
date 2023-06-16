#include<stdio.h>

double delta(double a, double b, double c) {
    double d = (b * b) - (4 * a * c);
    return d;
    //return (b * b) - (4 * a * c);
}

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double d = delta(a, b, c);
    printf("%lf\n", d);

    return 0;
}
