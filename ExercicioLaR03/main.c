#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que leia n�meros inteiros enquanto o usu�rio digitar um n�mero maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somat�rio dos n�meros
lidos.*/

int main()
{
    int numero, soma;
    numero = soma = 0;
    while(numero >= 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);
    if(numero != -1)
        soma = soma + numero;
    }

    printf("O somatorio dos numeros foi...: %d", soma);
    return 0;
}
