#include <stdio.h>

int main(){
    int diasTrabalhados;
    float valorDia = 50.25;
    float salarioBruto, salarioBonus, gratificacao;
    
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * valorDia;
    printf("O salário sem bônus a ser pago para esse vendedor é de R$ %.2f\n", salarioBruto);

    if(diasTrabalhados <= 10){
        gratificacao = 0;
    } else if(diasTrabalhados <= 20 ) {
        gratificacao = salarioBruto * 0.20;
    } else {
        gratificacao = salarioBruto * 0.30;
    }

    salarioBonus = salarioBruto + gratificacao;
    printf("Seu salario com bônus será de R$ %.2f\n", salarioBonus);
    printf("Seu salario com o desconto do imposto de renda será de R$ %.2f\n", salarioBonus * 0.90);
    return 0;
}