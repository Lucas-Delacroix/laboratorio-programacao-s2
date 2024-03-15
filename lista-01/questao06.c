#include <stdio.h>

int main(){
    float alturaMetros;
    int sexoInt;

    printf("Digite a sua altura em METROS: \n");
    scanf("%f", &alturaMetros);

    printf("Digite seu sexo:\n1 - Masculino\n2 - Feminino\nDigite aqui:");
    scanf("%d", &sexoInt);
    while(sexoInt != 1 && sexoInt != 2){
        printf("Insira um valor válido...");
        printf("Digite seu sexo:\n1 - Masculino\n2 - Feminino\n Digite aqui: ");
        scanf("%d", &sexoInt);
    }

    if (sexoInt == 1) {
        printf("Seu peso ideal deve ser: %.2f\n", alturaMetros * 72.7 - 58);
    } else {
        printf("Seu peso ideal deve ser: %.2f\n", alturaMetros * 62.1 - 44.7);
    }
    return 0;
}