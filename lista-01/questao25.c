#include <stdio.h>

int main() {
    int segundosCalcular, horas, minutos, segundos; 
    
    
    printf("Digite os segundos: ");
    scanf("%d", &segundosCalcular);
    
    
    horas = (segundosCalcular / 3600); 
    minutos = (segundosCalcular - (3600 * horas)) / 60; 
    segundos = (segundosCalcular - (3600 * horas) - (minutos * 60)); 
    

    printf("%d:%d:%d\n", horas, minutos, segundos);
    
    return 0;
}
