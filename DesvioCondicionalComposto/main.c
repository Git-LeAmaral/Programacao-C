#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   if(numero >0)
    printf("POSITIVO \n");
   else
    printf("NEGATIVO \n");

    return 0;
}
