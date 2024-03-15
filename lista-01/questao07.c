#include <stdio.h>

int main() {
    int horas, minutos, segundos, total_segundos;

    // Solicita ao usuário que insira as horas, minutos e segundos
    printf("Digite o número de horas: ");
    scanf("%d", &horas);
    printf("Digite o número de minutos: ");
    scanf("%d", &minutos);
    printf("Digite o número de segundos: ");
    scanf("%d", &segundos);

    // Calcula o total de segundos
    total_segundos = (horas *  3600) + (minutos *  60) + segundos;

    // Imprime o total de segundos
    printf("O total de segundos é: %d\n", total_segundos);

    return  0;
}
