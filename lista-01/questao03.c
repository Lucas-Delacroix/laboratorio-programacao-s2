#include <stdio.h>

int main(){
    float num;
    printf("Digite um valor real: ");
    scanf("%f", &num);

    printf("Este número com apenas uma casa decimal fica dessa maneira: %.1f\n", num);
    return 0;
}