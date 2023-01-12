#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca para usar a funçao strcmp
#include <conio.h>
#include <locale.h>

/* Começo Matriz*/

    char *email;
    char *name;
    char *cpf;
    char *birthDay;
    char *phoneNumber;
    char *street;
    char *streetNumber;
    char *neighborhood;
    char *city;
    char *state;
    char *cep;
    char *diagnosisDay;
    char *comorbidity;

/* variavel para leitura de dados */

char leitura[50];

/* variavel de tratamento do registro*/
char registro[297];

/* ponteiro para arquivo*/
    FILE *fp;

/* FUNÇÕES*/

int validate_password() {
    char login[20];
    char senha[20];
    int i, senha_ok;
    char c;

    do {
        system("CLS");
	printf(">>> Sistema de cadastro de pacientes diagnosticados com Covid-19 >>>\n\n\n\n\n");
	fflush(stdin);
	printf("Login: ");
	gets(login);
	printf("\nSenha: ");
	i = 0;
        while((c=getch())!=13){ /*13 é o valor de ENTER na tabela ASCII*/
            senha[i]=c;
            i++;
            printf("*");      /*imprime o * Anterisco*/
        }
        senha[i]='\0';

	senha_ok = strcmp(senha, "beller");
	if(!senha_ok) return 1;
       } while (senha_ok);
}


int read_option(){ /* Ler opções do programa*/
    int opcao, passagem = 0;

    do {
	system("cls");
        printf("Menu Principal\n");
        printf("--------------\n");
        printf("1- Cadastrar Paciente\n");
        printf("2- Consultar Paciente\n");
        printf("3- Pesquisar Paciente (Nome/CPF)\n");
        printf("0- Sair do Programa\n");
        if (passagem)
	    printf("\n * Opção inválida!\n");
	printf ("Escolha uma das opções:\n");
        printf(">>> ");
        scanf("%d",&opcao);
	getchar();
        printf("\n");
	if (opcao != 0 && opcao != 1 && opcao != 2 && opcao != 3) passagem = 1;

       } while (opcao != 0 && opcao != 1 && opcao != 2 && opcao != 3);
    return opcao;
}


/*
void pause(char mensagem[]){
    printf("%s",mensagem);
    getch();
}
*/

void preencher_espacos(char *sequencia, int tamanho) {
    int tam, espacos, i;

    strcat(registro, sequencia);
    tam = strlen(sequencia);
    espacos = tamanho - tam;
    for (i=1;i<=espacos;i++) strcat(registro, " ");
}

void tratar_registro() {
    preencher_espacos(name, 50);
    preencher_espacos(email, 50);
    strcat(registro, cpf);
    strcat(registro, birthDay);
    preencher_espacos(phoneNumber, 15);
    preencher_espacos(street, 50);
    preencher_espacos(streetNumber, 10);
    preencher_espacos(neighborhood, 30);
    preencher_espacos(city, 30);
    strcat(registro, state);
    strcat(registro, cep);
    strcat(registro, diagnosisDay);
    preencher_espacos(comorbidity, 20);
}

int salvar() {

    fp = fopen("arquivo.txt", "a");

    if (fp == NULL) {
	return 0;
    }

    fprintf(fp, "%s", registro);

    fclose(fp);
    return 1;
}

int cadastrar() {
    system("cls");
    printf("<<< Entrada de paciente >>>\n\n\n ");

    fflush(stdin);
    printf ("\nDigite o Nome do Paciente: ");
    gets(leitura);
    name = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!name)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(name);
            return 0;
        }
    strcpy(name, leitura);

    printf ("\nDigite o Email do Paciente: ");
    gets(leitura);
    email = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!email)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(email);
            return 0;
        }
    strcpy(email, leitura);

    printf ("\nDigite o CPF do Paciente ( Somente Numeros ): ");
    gets(leitura);
    cpf = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!cpf)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(cpf);
            return 0;
        }
    strcpy(cpf, leitura);

    printf ("\nData de nascimento do Paciente?\nNo formato DD/MM/AAAA: ");
    gets(leitura);
    birthDay = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!birthDay)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(birthDay);
            return 0;
        }
    strcpy(birthDay, leitura);

    printf ("\nDigite o telefone do Paciente (Somente Numeros ): ");
    gets(leitura);
    phoneNumber = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!phoneNumber)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(phoneNumber);
            return 0;
        }
    strcpy(phoneNumber, leitura);

    printf ("\nEndereço:\nLogradouro (rua, avenida, alameda ou outro): ");
    gets(leitura);
    street = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!street)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(street);
            return 0;
        }
    strcpy(street, leitura);

    printf ("\nNumero: ");
    gets(leitura);
    streetNumber = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!streetNumber)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(streetNumber);
            return 0;
        }
    strcpy(streetNumber, leitura);

    printf ("\nBairro: ");
    gets(leitura);
    neighborhood = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!neighborhood)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(neighborhood);
            return 0;
        }
    strcpy(neighborhood, leitura);

    printf ("\nCidade: ");
    gets(leitura);
    city = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!city)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(city);
            return 0;
        }
    strcpy(city, leitura);

    printf ("\nEstado: ");
    gets(leitura);
    state = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!state)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(state);
            return 0;
        }
    strcpy(state, leitura);

    printf ("\nCEP: ");
    gets(leitura);
    cep = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!cep)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(cep);
            return 0;
        }
    strcpy(cep, leitura);

    printf ("\nQual Dia do diagnostico?\nNo formato DD/MM/AAAA: ");
    gets(leitura);
    diagnosisDay = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!diagnosisDay)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(diagnosisDay);
            return 0;
        }
    strcpy(diagnosisDay, leitura);

    printf ("\n O paciente tem alguma comorbidade?");
    gets(leitura);
    comorbidity = (char *) calloc((strlen(leitura)+1), sizeof(char));
    if (!comorbidity)
        {
            printf ("* Erro: Memoria Insuficiente *");
                free(comorbidity);
            return 0;
        }
    strcpy(comorbidity, leitura);

    tratar_registro();

    if (salvar()) printf ("\n\nDados do paciente salvo em arquivo!\n\n");

    else printf ("\n\nHouve um problema com a manipulação do arquivo.\n\n");

    free(name);
        free(email);
        free(cpf);
        free(birthDay);
        free(phoneNumber);
        free(street);
        free(streetNumber);
        free(neighborhood);
        free(city);
        free(state);
        free(cep);
        free(diagnosisDay);
        free(comorbidity);

    printf ("\n\nTamanho do registro: %d caracteres\n\n", strlen(registro));

    system("pause");
    return 1;
}









    int comorbidade, diabetes, obesidade, hipertensao, tuberculose;           /* ler tipos de comorbidades*/

    do{

        printf("Digite o tipo da comorbidade: \n");
        printf("0 - Diabetes \n");
        printf("1 - Obesidade \n");
        printf("2 - Hipertensao \n");
        printf("3 - tuberculose \n");
        printf("4 - Sem Comorbidades \n");
        printf("Digite uma opcao:");
        scanf("%d", &comorbidade);



            switch(comorbidade){

        case 0:
            printf("Diabetes \n");
            break;
        case 1:
            printf("Obesidade \n");
            break;
        case 2:
            printf("Hipertensao \n");
            break;
        case 3:
            printf("Tuberculose \n");
            break;
        default:
            printf("Sem comorbidade \n");
            break;

        }
    while(comorbidade != 4);

    }








int consultar() {
    system("cls");
    FILE *fp;

    fp = fopen("arquivo.txt", "r");

    if (fp == NULL) {
	return 0;
    }

        fscanf(fp, "%s", &name);
        fscanf(fp, "%s", &email);
        fscanf(fp, "%s", &cpf);
        fscanf(fp, "%s", &birthDay);
        fscanf(fp, "%s", &phoneNumber);
        fscanf(fp, "%s", &street);
        fscanf(fp, "%s", &streetNumber);
        fscanf(fp, "%s", &neighborhood);
        fscanf(fp, "%s", &city);
        fscanf(fp, "%s", &state);
        fscanf(fp, "%s", &cep);
        fscanf(fp, "%s", &diagnosisDay);
        fscanf(fp, "%s", &comorbidity);
        fclose(fp);

    return 1;
}

void pesquisar() {
    system("cls");
    printf("\nInforme o CPF da pessoa: ");
    long cpf_localizador;
    scanf("%Lu",&cpf_localizador);
    printf ("* Consulta de Paciente *\n\n\n\n\n");
    printf ("Nome do Paciente: %s\n", name);
    printf ("E-mail: %s\n", email);
    printf ("Data de Nascimento: %s\n", birthDay);
    printf ("Telefone: %s\n", phoneNumber);
    printf ("Data do diagnostico: %s\n", diagnosisDay);
    printf ("Comorbidade: %s\n", comorbidity);
    printf ("\n\n * Dados do paciente recuperados do arquivo *\n\n");
    system("pause");

}


void imprimir() {
    system("cls");
    printf ("* Consulta de Paciente *\n\n\n\n\n");
    printf ("Nome do Paciente: %s\n", name);
    printf ("E-mail: %s\n", email);
    printf ("Data de Nascimento: %s\n", birthDay);
    printf ("Telefone: %s\n", phoneNumber);
    printf ("Endereço:\n");
    printf ("%s número: %s bairro: %s\n", street, streetNumber, neighborhood);
    printf ("cidade: %s estado: %s CEP: %s\n", city, state, cep);
    printf ("Data do diagnóstico: %s\n", diagnosisDay);
    printf ("Comorbidade: %s\n", comorbidity);
    printf ("\n\n * Dados do paciente recuperados do arquivo *\n\n");
}

/* FIM FUNÇÕES*/

int main()
{
    int opcao;
    setlocale(LC_ALL, "Portuguese");

    if(validate_password()) {
	do {
	    opcao = read_option();
	    switch(opcao)
	    {
	        case 0:
		    system("cls");
		    printf ("* Você acabou de sair do sistema *\n\n");
		    system("pause");
		    return 0;
	        case 1:
		    cadastrar();
		    break;
	        case 2:
		    if (consultar()) imprimir();
	            else printf ("\n\nHouve um problema com a manipulação do arquivo.\n\n");
		    system ("pause");
		    break;
	        case 3:
		    pesquisar();
		    break;
	    }
	   } while (1);
    }
return 0;
}
