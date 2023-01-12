#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia o valor do sal�rio bruto de uma pessoa. Calcular o desconto
de INSS levando em considera��o o seguinte:
Sal�rio Bruto Taxa de INSS
Sal�rio at� R$ 1.317,07 8%
Sal�rio acima de R$ 1.317,07 at� R$ 2.195,12 9%
Sal�rio acima de R$ 2.195,12 11%
O limite m�ximo de desconto de INSS ser� de R$ 482,93, portanto voc� deve levar em
considera��o este valor m�ximo.
No final apresentar:
- O valor do sal�rio bruto;
- A taxa de INSS;
- O valor de desconto de INSS;
- O valor do sal�rio l�quido.
*/


int main()
{
    char nome[80];
    float salBruto, taxINSS, desconto, salLiquido;

    printf("Digite o nome: ");
    gets(nome);
    printf("Digite o Salario Bruto: ");
    scanf("%f", &salBruto);

    printf("\n\n");
    if(salBruto <= 1317)
        taxINSS = 8;
    else if(salBruto <= 2195)
        taxINSS = 9;
    else
        taxINSS = 11;

    desconto = salBruto * (taxINSS / 100);
    salLiquido = salBruto - taxINSS;

    printf("Nome do Funcionario...: %s \n", nome);
    printf("Salario Bruto.........: R$ %10.2f \n", salBruto);
    printf("Taxa de INSS..........: %.1f %%\n", taxINSS);
    printf("Desconto do INSS......: %.2f \n", desconto);
    printf("Salario Liquido.......: R$ %10.2f \n", salLiquido);

    return 0;
}
