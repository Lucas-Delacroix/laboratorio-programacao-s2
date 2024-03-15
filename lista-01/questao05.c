#include <stdio.h>

int main(){
    float valorConta, totalPago, taxaGarcom;
    taxaGarcom = 0.10;

    printf("Digite o valor da conta: \n");
    scanf("%f", &valorConta);

    totalPago = valorConta + (valorConta * taxaGarcom);
    printf("Valor total a ser pago é: %.2f\n", totalPago);
}