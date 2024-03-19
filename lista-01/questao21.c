#include <stdio.h>

int main() {
    int n1, n2;

    
    printf("Digite o primeiro inteiro: ");
    scanf("%d", &n1);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &n2);

    printf("%d %s múltiplo de %d.\n", n1, (n1 % n2 == 0) ? "É" : "Não é", n2);

    return 0;
}
