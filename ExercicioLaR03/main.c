#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que leia números inteiros enquanto o usuário digitar um número maior
ou igual a zero. No final, antes de encerrar o programa apresentar o somatório dos números
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
