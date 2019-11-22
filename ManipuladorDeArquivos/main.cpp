//#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


int main()
{
int index();
int menu();
void EscreverArquivoTexto(FILE*arquivoEscrever);
void LerArquivoTexto(FILE *arquivoler);
//declaraçao das funoes!^^^^^^

    int NumEscolhidoMenu;
    char textoUsuario[1000];
    FILE *arquivoTexto;

    NumEscolhidoMenu = index();


    if(NumEscolhidoMenu == 1){
        EscreverArquivoTexto(arquivoTexto);
    }else if(NumEscolhidoMenu == 2){
        LerArquivoTexto(arquivoTexto);
    }


    return 0;
}

int index(){
int menu();

    int NumReservaEscolha;
    printf("\n\t\t\t>>>>>>>>>>Bem Vindo<<<<<<<<<<\n");
    printf("\t\t\t   Manipulador de Arquivos\n");
    printf("\n\t\t\t\t     -Menu-\n\n");
    NumReservaEscolha = menu();
    system("cls");

    return NumReservaEscolha;
}
int menu(){
    int numMenuEscolha;

    printf("[1]-Escrever um Arquivo \n");
    printf("[2]-Ler um Arquivo\n");

    scanf("%i",&numMenuEscolha);


    return numMenuEscolha;
}
void EscreverArquivoTexto(FILE*arquivoEscrever){
    char TextoPassado[1000],nomeDoArquivo[55];

    printf("Digite o nome do NOVO ou ARQUIVO EXISTENTE \n");
    scanf("%s",&nomeDoArquivo);
    strcat(nomeDoArquivo,".txt");
    arquivoEscrever = fopen(nomeDoArquivo,"w");

    while(getchar() != '\n');//Para cpturar /n perdido tipo cin.ignore

    if(arquivoEscrever==NULL){
    printf("%s\n", strerror(errno));
    exit(1);
    }
    printf("\n Digite o Texto\n");
    gets(TextoPassado);
    //scanf("%s",&TextoPassado); // PROBLEMA QUERO USAR A FUNÇAO GETS;


    fprintf(arquivoEscrever,"%s",TextoPassado);

    fclose(arquivoEscrever);
}
void LerArquivoTexto(FILE *arquivoler){
    char TextoTemporarioLER[1000],nomeDoArquivoLer[60];

    printf("Digite o nome do ARQUIVO EXISTENTE \n");
    scanf("%s",&nomeDoArquivoLer);
    strcat(nomeDoArquivoLer,".txt");

    arquivoler = fopen(nomeDoArquivoLer,"r");

    if(arquivoler==NULL){
    printf("%s\n", strerror(errno));
    exit(1);
    }

    fscanf(arquivoler,"%s",&TextoTemporarioLER);

    fclose(arquivoler);

    printf("\n%s\n",TextoTemporarioLER);
}



