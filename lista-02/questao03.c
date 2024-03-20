#include <stdio.h>

int main() {
    int F, i;
    unsigned long long int fatorial = 1; // Utilizando unsigned long long para lidar com números grandes

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &F);

    // Verifica se o número é negativo
    if (F < 0) {
        printf("Erro! O fatorial de um número negativo não existe.\n");
    } else {
        for (i = 1; i <= F; ++i) {
            fatorial *= i;
        }
        printf("Fatorial de %d = %llu\n", F, fatorial);
    }

    return 0;
}
