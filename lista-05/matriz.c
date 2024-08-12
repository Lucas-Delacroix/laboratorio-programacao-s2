#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RG 100
int main(){
    int **vetor = NULL, qtdCol, qtdLinhas;

    puts("Digite a quantidade de colunas: ");
    scanf("%d", &qtdCol);
    puts("Digite a quantidade de linhas: ");
    scanf("%d", &qtdLinhas);

    if(!(vetor = (int*) malloc(qtdCol * qtdLinhas * sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }

    for(int i = 0; i < (qtdCol * qtdLinhas); i++){
        *(vetor + i) = rand() % RG;
    }
    printf("\n");

    for(int k = 0; k < (qtdCol * qtdLinhas); k++){
        printf("%d ", *(vetor + k));
        if(!((k+1) % qtdCol)) printf("\n");
    }

    //Dado (x,y) pelo usuário, encontre o vetor.
    int x, y;
    puts("Digite x,y para encontrar o valor correspondente: ");
    scanf("%d%d", &x, &y);

    int valor = *(vetor + (x * qtdCol) + y);
    printf("\n%d\n", valor);

    return 0;
}