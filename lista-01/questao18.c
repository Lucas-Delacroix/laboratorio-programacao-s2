#include <stdio.h>

int main(){
    #define PI 3.14159
    float raio;

    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);

    printf("O valor do diamêtro dessa circunferência é: %.3f\n", raio * 2);
    printf("O valor da circunferência é: %.3f\n", 2*PI*raio);
    printf("O valor da área dessa circunferência é: %.3f\n", 2*PI*raio*raio);
}