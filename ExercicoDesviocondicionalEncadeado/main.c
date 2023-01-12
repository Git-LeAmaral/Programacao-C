#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[80];
    float salBruto, txINSS, desconto, salLiquido;

    printf("Digite o nome do funcionario: ");
    gets(nome);
    printf("Digite o salario bruto: ");
    scanf("%f", &salBruto);

    if(salBruto <= 1000)
        txINSS = 8;
    else if(salBruto <= 2000)
        txINSS = 9;
    else
        txINSS = 10;

        desconto = salBruto * (txINSS / 100);
        salLiquido = salBruto - desconto;

    printf("\n\n");
    printf("Nome do funcionario..........: %s \n", nome);
    printf("Salario Bruto................: R$ %10.2f \n", salBruto);
    printf("Tax de INSS..................: %.2f%% \n", txINSS);
    printf("Desconto de INSS.............: R$ %10.2f \n", desconto);
    printf("Salario Liquido..............: R$ %10.2f \n", salLiquido);
    return 0;
}
