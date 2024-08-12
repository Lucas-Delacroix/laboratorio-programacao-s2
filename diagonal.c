#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *matriz = NULL, N, soma = 0;
    puts("Digite o valor de N para gerar a matriz NxN: ");
    scanf("%d", &N);

    if(!(matriz = (int*) malloc(N * sizeof(int)))){
        puts("Memória indisponível.");
        exit(1);
    }

    srand(time(NULL));
    for(int i = 0; i < (N * N); i++){
        *(matriz + i) = rand() % 10;
    }
    printf("\n");

    for(int k = 0; k < (N * N); k++){
        printf("%d ", *(matriz + k));
        if(!((k+1) % N)) printf("\n");
    }
    

    int aux = 0;
    for(int k = 0; k < (N * N); k++){
        if(!(k % (N +1)))soma+= (*(matriz+k));
        
    }



    printf("\nSOMA: %d", soma);
    return 0;
}