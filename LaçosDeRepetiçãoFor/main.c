#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, resultado, i;

   for(i = 0; i < 5; i++){
        printf("Digite um numero...: ");
        scanf("%d", &numero);
        resultado = numero * 3;
        printf("\n\n");
        printf("O resultado foi...: %d \n", resultado);
   }




    return 0;
}
