#include <stdio.h>
#include <string.h>
#include <time.h>

/*
(DESAFIO DA SEMANA): Você está montando um cadastro para uma empresa de vendas na internet, e precisa
fornecer este "formulário de dados de clientes".
Não se preocupe neste momento se irá ou não guardar este dado em algum lugar.
Pergunte e obtenha os seguintes dados e depois exiba todos na tela:

Nome Completo
Data de Nascimento
Cidade/País de Origem(Nascimento)
Endereço completo de onde mora
País onde reside
Data do Cadastro
Escolaridade: (Ensino Básico/Ensino Fundamental/Ensino Superior)

*/

int main() {

    char nome_completo[50] = "";
    char data_nascimento[20] = "";
    char cidade_origem[30] = "";
    char pais_origem[30] = "";
    char endereco[200] = "";
    char pais_residencia[50] = "";
    int escolaridadeInt;
    char escolaridade[50] = "";
    time_t data_cadastro;

    printf("Olá Seja bem-vindo! Por gentileza, digite o seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    // scanf("%s", nome_completo);
    printf("Ótimo, agora, digite sua data de nascimento: ");
    fgets(data_nascimento, sizeof(data_nascimento), stdin);
    // scanf("%s", data_nascimento);
    printf("Sua cidade de origem: ");
    fgets(cidade_origem, sizeof(cidade_origem), stdin);
    // scanf("%s", cidade_origem);
    printf("Seu país de origem: ");
    fgets(pais_origem, sizeof(pais_origem), stdin);
    // scanf("%s", pais_origem);
    printf("País de residência: ");
    fgets(pais_residencia, sizeof(pais_residencia), stdin);
    // scanf("%s", pais_residencia);
    printf("Endereço completo: ");
    fgets(endereco, sizeof(endereco), stdin);


    printf("Digite sua escolaridade: (1 - Ensino básico) - (2 - Ensino fundamental) - (3 - Ensino Superior)");
    scanf("%d", &escolaridadeInt);

    if (escolaridadeInt == 1) {
        strcpy(escolaridade, "Ensino básico");
    } else if (escolaridadeInt == 2 ){
        strcpy(escolaridade, "Ensino Fundamental");
    } else if (escolaridadeInt == 3){
        strcpy(escolaridade, "Ensino Superior");
    } else {
        // Ainda nao consegui usar corretamente, entao eu vou fingir que consegui fazer uma recursividade aqui rsrs
        printf("Por gentileza, digite uma opção válida (1, ou 2 ou 3)");
    }
    printf(" \n");
    printf("--------------------------------------------- \n");
    printf(" \n");
    printf("Segue os dados abaixo: \n");
    printf(" \n");
    printf("--------------------------------------------- \n");
    printf(" \n");

    printf("Nome Completo: %s", nome_completo);
    printf("Data de Nascimento: %s", data_nascimento);
    printf("Cidade e País de Origem: %s - %s", cidade_origem, pais_origem);
    printf("Endereço: %s", endereco);
    printf("País de Residência: %s", pais_residencia);
    printf("Escolaridade: %s \n", escolaridade);
    time(&data_cadastro);
    printf("Data de Cadastro: %s", asctime(localtime(&data_cadastro)));

    printf(" \n");
    printf("--------------------------------------------- \n");
    printf(" \n");
    
    return 0;

}