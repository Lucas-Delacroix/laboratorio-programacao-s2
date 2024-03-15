#include <stdio.h>


int main(){
  int x; 
  printf("Digite um valor inteiro para X: ");
  scanf("%d", &x);

  printf("Este valor em hexadecimal fica dessa maneira: %x\n", x);
  printf("Este valor em octal fica dessa maneira: %o\n", x);
  return 0;  
}