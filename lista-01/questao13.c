#include <stdio.h>
int main(){
    int A, B, C;
    printf("Digite o valor de A:\n");
    scanf("%d", &A);
    printf("Digite o valor de B:\n");
    scanf("%d", &B);
    C= A;
    A = B;
    B = C;
    printf("Valor de A: %d\nValor de B: %d\n", A, B);
    return 0;
}
