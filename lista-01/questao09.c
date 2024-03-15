#include <stdio.h>

int main(){
    int x;
    printf("Digite um valor inteiro x: ");
    scanf("%d",&x);

    printf("O antecessor desse inteiro é %d. O sucessor desse inteiro é %d\n", x-1, x+1);
    return 0;
}