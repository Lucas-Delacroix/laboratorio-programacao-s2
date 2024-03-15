#include <stdio.h>
int main(){
    int x = 0;
    
    x = 7 + 3 * 6 / 2 - 1;
    //15
    // Primeiro é realizada a divisão (/), depois multiplicação (*)
    // depois soma e subtração. As operações são feitas dando prioridade da direita pra esquerda.
    printf("%d\n",x);

    x = 2 % 2 + 2 * 2 - 2 / 2;
    // 3
    // As prioridades são resto da divisão (%), seguido pela multiplicação (*),
    // divisão (/) dando prioridade da esquerda para a direita, por fim, adição (+) e subtração (-)
    printf("%d\n",x);

    x = (3 * 9 * (3 + (9 * 3/(3))));
    //324
    // A prioridade é dada para as operações que estão dentro dos parênteses, 
    //em seguida da multiplicação e divisão
    //da esquerda para a direita, em seguida da adição e multiplicação,
    printf("%d\n",x);
    return 0;
}