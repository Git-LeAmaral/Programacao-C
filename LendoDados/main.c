#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorA, valorB, resultado; /*Declara��o de Variaveis*/

    printf("Digite um valor: ");  /*Entrada de Dados*/
    scanf("%d", &valorA);
    printf("Digite outro valor: ");
    scanf("%d", &valorB);

    resultado = valorA + valorB; /*Opera��o de processamento de Dados*/

    printf("Resultado: %d \n", resultado); /*Saida de dados*/
    printf("%d + %d = %d \n", valorA, valorB, resultado);
    return 0;
}
