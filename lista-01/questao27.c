#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, num3, mediaAritmetica, mediaGeometrica;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    printf("Digite o terceiro número: ");
    scanf("%lf", &num3);

    mediaAritmetica = (num1 + num2 + num3) / 3;

    mediaGeometrica = pow((num1 * num2 * num3), 1.0/3);

    printf("Média aritmética: %.2lf\n", mediaAritmetica);
    printf("Média geométrica: %.2lf\n", mediaGeometrica);

    return 0;
}
