#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia do teclado 25 valores inteiros e escreva no final a soma dos
valores que foram lidos.*/

int main()
{
    int i, soma = 0;

    while(i <= 25){
        printf("%d \n", i);

    i++;
    soma += i;

    }




    printf("A soma eh....: %d \n", soma);
    return 0;
}
