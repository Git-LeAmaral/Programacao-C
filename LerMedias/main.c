#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorA, valorB, media;

    printf("Digite um valor: ");
    scanf("%f", &valorA);
    printf("Digite outro valor: ");
    scanf("%f", &valorB);

    media = (valorA + valorB) /2;
    printf("A Media foi: %.2f \n", media);




    return 0;
}
