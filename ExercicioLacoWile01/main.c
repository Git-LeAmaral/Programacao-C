#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma;

    soma = numero = 0;

    while(numero != -1){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero != -1)
            soma += numero;
    }

    printf("Somatorio dos numeros digitados: %d \n", soma);





    return 0;
}
