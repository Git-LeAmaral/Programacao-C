#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 20 valores inteiros e escreva no final a soma dos valores
positivos e a média dos valores negativos.*/

int main()
{
    int numero, somaPos, somaNeg, contNeg, media;

    numero = 7;

    somaPos = somaNeg = contNeg = 0;

    while(numero != 0){
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if(numero >= 0){
            somaPos = somaPos + numero;
        }
        else{
            somaNeg = somaNeg + numero;
            contNeg++;
        }

    }

        media = somaNeg / contNeg;

        printf("O somatorio dos positivos foi.......: %d \n", somaPos);
        printf("A media dos negativos foi...........: %d \n", media);


    return 0;
}
