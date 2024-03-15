#include <stdio.h>

int main(){
    float valorHora, horasTrabalhadas, descontoINSS, salarioBruto, salarioLiquido;
    
    printf("Digite o valor da hora aula: ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor percentual do desconto do INSS: %%");
    scanf("%f", &descontoINSS);

    salarioBruto = valorHora * horasTrabalhadas;
    salarioLiquido = salarioBruto * (1.0 - (descontoINSS/100));

    printf("O salário bruto desse professor é: %.2f\n", salarioBruto);
    printf("O salário líquido desse professor é: %.2f\n", salarioLiquido);



    return 0;
}