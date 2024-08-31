#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int *ptr = NULL;
    ptr = malloc(sizeof(int));
    do{
        puts("Digite um número: ");
        scanf("%d", ptr);
    } while (*ptr != 0);

    return 0;
}