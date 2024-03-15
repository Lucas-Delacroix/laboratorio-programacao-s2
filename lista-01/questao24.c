#include <stdio.h>

// Função para calcular x elevado a n usando operadores binários
int power(int x, int n) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power(x, n / 2) * power(x, n / 2);
    else
        return x * power(x, n / 2) * power(x, n / 2);
}

int main() {
    int x, n;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calculando o produto de x por 2 elevado a n
    int result = x * power(2, n);

    printf("O produto de %d por 2 elevado a %d é %d\n", x, n, result);

    return 0;
}
