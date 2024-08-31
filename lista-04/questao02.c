#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, *ptrn1 = &n1, *ptrn2 = &n2;
    int temp;
    puts("Digite valores para n1 e n2: ");
    scanf("%d%d",ptrn1, ptrn2)
    temp = *ptrn1;
    *ptrn1 = *ptrn2;
    *ptrn2 = temp;

    return 0;
}