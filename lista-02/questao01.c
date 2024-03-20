#include <stdio.h>

int main(){
    int dia;
    do {
        printf("Digite um número equivalente a um dia da semana (Utilize 0 para sair): ");
        scanf("%d", &dia);

        switch (dia)
        {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-Feira\n");
            break;
        case 3:
            printf("Terça-Feira\n");
            break;
        case 4:
            printf("Quarta-Feira\n");
            break;
        case 5:
            printf("Quinta-Feira\n");
            break;
        case 6:
            printf("Sexta-Feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            if(dia != 0){
                printf("Número de dia inválido.\n ");
            }
        }
    } while(dia != 0);
    return 0;
}