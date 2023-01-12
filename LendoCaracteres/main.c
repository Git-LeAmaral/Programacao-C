#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    char nome[80];       /* String */

    printf("Digite uma letra: ");
    scanf("%c", &letra);
    fflush(stdin);       /* Limpando buffer de teclado*/
    printf("Digite um nome: ");
    gets(nome);


    printf("Letra digitada: %c \n", letra);
    printf("Nome digitado: %s \n", nome);


    return 0;
}
