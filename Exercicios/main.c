#include <stdio.h>
#include <stdlib.h>

/* A quilometragem inicial de um carro � 200000. Depois de uma viagem, a quilometragem final
do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando
em vari�veis, depois calcular e armazenar a dist�ncia percorrida do carro e finalmente
apresent�-la.
*/

int main()
{
   int kmInicial, kmFinal, kmPercorrido;

   printf("Digite o km inicial: ");
   scanf("%d", &kmInicial);
   printf("Digite o km final: ");
   scanf("%d", &kmFinal);

   kmPercorrido = kmInicial - kmFinal;

   printf("A distancia percorrida do carro foi, %d \n", kmPercorrido);

    return 0;
}
