#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main(){
    int *vetor = NULL;
    vetor = (int*) malloc(TAM * sizeof(int));
    
    for(int i = 0; i < TAM; i ++){
        printf("Digite um valor para a posicao %d: ", i);
        scanf("%d", (vetor + i));
    }
    return 0;
}