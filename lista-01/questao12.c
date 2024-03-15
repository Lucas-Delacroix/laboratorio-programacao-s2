//SOMA, PRODUTO, DIFERENÇA, QUOCIENTE, RESTO DIVISÃO
#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite um número: \n");
    scanf("%d", &n1);

    printf("Digite um outro número: \n");
    scanf("%d", &n2);

    printf("A soma desses números é: %d\n", n1 + n2);
    printf("O produto desses números é: %d\n", n1 * n2);
    printf("A diferença desses números é: %d\n", n1 - n2);
    printf("O quociente desses números é: %d\n", n1 / n2);
    printf("O resto da divisão desses números é: %d\n", n1 % n2);
    return 0;
}