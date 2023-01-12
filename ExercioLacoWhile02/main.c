#include <stdio.h>
#include <stdlib.h>

/* Faça umm programa que leia numeros até que o usuario digite 0, e no final do programa apresentar o somatorio dos numeros
positivos e a media dos numeros negativos*/


int main()
{
    int numero, somaPos, somaNeg, contNeg, media;

    numero = 7;
    somaPos = somaNeg = contNeg = 0;

    while(numero != 0){
        printf("Digite um numnero: " );
        scanf("%d", &numero);

        if(numero >= 0){
            somaPos += numero;
        }
        else{
            somaNeg += numero;
            contNeg++;
        }

    }
    media = somaNeg / contNeg;

    printf("Somatorio dos Positivos: %d \n", somaPos);
    printf("Media dos Negativos: %d \n", media);
    return 0;
}
