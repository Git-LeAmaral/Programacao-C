#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB;
    int somar, subtrair, multiplicar, dividir, resto;

    printf("Digite um valor: ");
    scanf("%d", &valorA);
    printf("Digite outro valor: ");
    scanf("%d", &valorB);

    somar        = valorA + valorB;
    subtrair    = valorA - valorB;
    multiplicar = valorA * valorB;
    dividir     = valorA / valorB;
    resto       = valorA % valorB;

    printf("A soma foi........: %d \n", somar);
    printf("A diferenca foi...: %d \n", subtrair);
    printf("O produto foi ....: %d \n", multiplicar);
    printf("O quonciente foi..: %d \n", dividir);
    printf("O resto foi.......: %d \n", resto);
    return 0;
}
