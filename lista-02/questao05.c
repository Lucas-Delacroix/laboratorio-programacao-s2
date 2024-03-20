#include <stdio.h>

int main(){
    int valorAtual, maiorValor = -999, menorValor = 999;
    do{
    printf("Digite um valor (0 para interromper): ");
    scanf("%d", &valorAtual);

    if (valorAtual > maiorValor){
        maiorValor = valorAtual;
    }
    if (valorAtual < menorValor && valorAtual != 0) {
        menorValor = valorAtual;
    }
    } while(valorAtual != 0);
    
    printf("\nO maior valor inserido foi %d.", maiorValor);
    printf("\nO menor valor inserido foi %d.", menorValor);

    return 0;
}