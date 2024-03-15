#include <stdio.h>

int main(){
    float tempFah, tempCelsius;
    printf("Digite a temperatura em graus Celsius para ser convertida para graus Fahrenheit: ");
    scanf("%f", &tempCelsius);

    tempFah = (tempCelsius * 9 + 160) / 5;
    printf("A temperatura em Fahrenheint é: %.2f\n", tempFah);
}