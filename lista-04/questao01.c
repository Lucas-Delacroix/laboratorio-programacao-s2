#include <stdio.h>

int main() {
    int num1;
    int num2;
    int result;
    int *ptr_num1 = &num1;
    int *ptr_num2 = &num2;
    int *ptr_result = &result;
    puts("Digite o valor de N1 e N2: ");
    scanf("%d%d", ptr_num1, ptr_num2);

    
    *ptr_result = *ptr_num1 + *ptr_num2;

    printf("\nResultado da soma: %d\n", result);
    printf("Endereço onde o resultado é armazenado: %p\n", (void*)ptr_result);

    return 0;
}
