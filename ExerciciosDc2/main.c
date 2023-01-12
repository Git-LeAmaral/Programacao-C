#include <stdio.h>
#include <stdlib.h>

/*2. Escreva um programa que leia as quatro notas escolares de um aluno. Calcular e apresentar
à média. Levando em consideração que a média de aprovação da escola é “6”, informar se o
aluno foi “APROVADO” ou “REPROVADO”.*/


int main()
{
   float nota1, nota2, nota3, nota4, media;

   printf("Digite sua primeira nota.....: ");
   scanf("%f", &nota1);
   printf("Digite sua segunda nota......: ");
   scanf("%f", &nota2);
   printf("Digite sua terceira nota.....: ");
   scanf("%f", &nota3);
   printf("Digite sua quarta nota.......: ");
   scanf("%f", &nota4);

   printf("\n\n");
   media = (nota1 + nota2 + nota3 + nota4) /4;
   printf("Sua media foi....: %.2f \n", media);

   if(media >= 6)
      printf("APROVADO \n");
   else
      printf("REPROVADO \n");

    return 0;
}
