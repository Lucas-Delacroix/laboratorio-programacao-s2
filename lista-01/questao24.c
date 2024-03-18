#include <stdio.h>


void print_binary(unsigned int number) {
    if (number >> 1) {
        print_binary(number >> 1);
    }
    putc((number & 1) ? '1' : '0', stdout);
}

int main() {
    int x, n;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula 2 elevado a n usando deslocamento à esquerda
    int resultado = x << n;
    
    // Exibindo os binários para demonstração da operação de deslocamento
    print_binary(x);
    printf("\n");
    print_binary(n);
    printf("\n");
    print_binary(resultado);
    printf("\n");

    printf("\nO produto de x por 2 elevado a n é: %d\n", resultado);

    return 0;
}
