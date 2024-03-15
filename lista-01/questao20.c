#include <stdio.h>

int main() {
    int numero;
    printf("Digite um inteiro: ");
    scanf("%d", &numero);

    // Usando o operador ternário
    printf("%s\n", (numero % 2 == 0) ? "Este número é Par" : "Este número é Impar");

    return 0;
}
