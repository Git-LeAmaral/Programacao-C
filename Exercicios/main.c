#include <stdio.h>
#include <stdlib.h>

/* A quilometragem inicial de um carro é 200000. Depois de uma viagem, a quilometragem final
do carro ficou em 205701. Fazer um programa para ler do teclado estes valores armazenando
em variáveis, depois calcular e armazenar a distância percorrida do carro e finalmente
apresentá-la.
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
