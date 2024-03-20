#include <stdio.h>
int main(){
    float AlturaJose = 150, AlturaPedro = 110; // Corrigido: remover a vírgula extra
    float crescimentoJose = 2, crescimentoPedro = 3;
    int anos;

    for (anos = 0; anos <= 50; anos++){
        AlturaJose += crescimentoJose;
        AlturaPedro += crescimentoPedro;
        if(AlturaPedro > AlturaJose){
            printf("Em %d anos Pedro será maior que José.\n", anos);
            break;
        }
    }
    return 0;
}
