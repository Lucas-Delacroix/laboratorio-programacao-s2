#include <stdio.h>

int main(){
    int x;
    printf("Digite um valor inteiro x: ");
    scanf("%d",&x);

    printf("O triplo desse inteiro é: %d\nO quadrado desse inteiro é: %d\nO meio desse inteiro é: %.2f\n", x*3, x*x, (float)x/2);
    return 0;
}