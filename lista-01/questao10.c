#include <stdio.h>

int main(){
    float comprimento, largura, altura, volume;
    
    printf("Digite o valor do comprimento: ");
    scanf("%f", &comprimento);
    
    printf("Digite o valor do largura: ");
    scanf("%f", &largura);
    
    printf("Digite o valor do altura: ");
    scanf("%f", &altura);

    volume = comprimento * altura* largura;
    printf("O volume desse sólido é igual a: %.2f\n", volume);
    return 0;
}