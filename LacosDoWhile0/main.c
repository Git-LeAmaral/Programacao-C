#include <stdio.h>
#include <stdlib.h>

int main()
{
   int opcao, contPan, contCha, contPra;
   contPan = contPra = contCha = 0;

   do{
        system("cls");
        printf("Menu de opcoes...: \n");
        printf("0 - encerra o programa \n");
        printf("1 - inclui uma panela no estoque \n");
        printf("2 - inclui um prato no estoque \n");
        printf("3 - inclui uma chaleira \n");
        printf("4 - relatorio de inclusoes \n");
        printf("Digite uma opcao:");
        scanf("%d", &opcao);

        switch(opcao){

        case 0:
            printf("Encerrando o Programa:");
            break;
        case 1:
            contPan++;
            break;
        case 2:
            contPra++;
            break;
        case 3:
            contCha++;
            break;
        case 4:
            printf("Relatorio de inclusoes: \n");
            printf("Panelas:...... %d \n ", contPan);
            printf("Pratos:....... %d \n ", contPra);
            printf("Chaleiras..... %d \n ", contCha);
            system("pause");
            break;
        default:
            printf("Opcao invalida. \n");
            system("pause");
            break;




        }



   }
   while(opcao != 0);


    return 0;
}
