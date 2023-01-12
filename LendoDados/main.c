#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, resultado; /*Declaração de Variaveis*/

    printf("Digite um valor: ");  /*Entrada de Dados*/
    scanf("%d", &valorA);
    printf("Digite outro valor: ");
    scanf("%d", &valorB);

    resultado = valorA + valorB; /*Operação de processamento de Dados*/

    printf("Resultado: %d \n", resultado); /*Saida de dados*/
    printf("%d + %d = %d \n", valorA, valorB, resultado);
    return 0;
}
