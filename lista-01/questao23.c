#include <stdio.h>

int main(){
    int num, dezenas, centenas, unidades, numInvertido;
    
    do {
        printf("Digite um número de 3 dígitos: ");
        scanf("%d", &num);
    } while (num < 100 || num > 999);

    centenas = num / 100;
    dezenas = (num % 100) / 10;
    unidades = num % 10;

    numInvertido = unidades * 100 + dezenas * 10 + centenas;
    printf("Este número de 3 dígitos invertido fica dessa maneira? %d\n", numInvertido);

    return 0;
}