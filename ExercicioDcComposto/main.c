#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nome[80];
   float nota1, nota2, media;

   printf("Digite o nome do aluno: ");
   gets(nome);
   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);
   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   media = (nota1 + nota2) /2;

   printf("A media do aluno %s foi %.2f \n", nome, media);

   if(media >= 6)
    printf("APROVADO \n");
   else
    printf("REPROVADO \n");
    return 0;
}
