#include <stdio.h>
void print_binary(int number) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\n");
}
int main() {
    int num, teste1, teste2;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int valorAbsoluto = (num ^ (num >> ((sizeof(int) * 8) - 1))) - (num >> ((sizeof(int) * 8) - 1));
    printf("O valor absoluto de %d é %d\n", num, valorAbsoluto);
    return 0;
}
