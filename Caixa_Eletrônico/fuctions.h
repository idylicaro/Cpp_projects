#ifndef FUCTIONS_H_INCLUDED
#define FUCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct conta
{
    int numConta;
    int senha;
    float saldo;
    float historicoSaque[5] = {0,0,0,0,0};
};

void fSaque(conta &cliente,int &contadorDeSaque)
{
    //float &saldoSaq,float historico[5],
    float dinheiroAretirar;
    printf("Digite quanto quer Sacar:");
    scanf("%f",&dinheiroAretirar);

    if(cliente.saldo >= dinheiroAretirar)
    {
        cliente.saldo -= dinheiroAretirar;
        cliente.historicoSaque[contadorDeSaque] = dinheiroAretirar;
        contadorDeSaque++; //variavel GLOBAL!
        printf("\nSaque Efetuado!\n");
    }
    else
    {
        printf("Saldo Insuficiente!\n");
        system("pause");
    }
    system("pause");
    system("cls");

}
void saldoExtrato(conta cliente)
{
    int opcao;

    do
    {
        printf("\n\tDigite 1 para SALDO\n ");
        printf("\tDigite 2 para EXTRATO\n\n\t");
        scanf("%i", &opcao);
        switch (opcao)
        {
        case 1: // Opção para saldo.
            do
            {
                system("cls");
                printf("\t========== SALDO ==========\n\n");
                printf("\tDigite 1 para CONTA CORRENTE\n");
                printf("\tDigite 2 para CONTA POUPANCA\n\t\t");
                scanf("%i", &opcao);

                switch (opcao)
                {
                case 1:
                    system("cls");
                    printf("\t===== SALDO CONTA CORRENTE =====\n\n");
                    printf("\tSALDO.................... %.2f\n\n",cliente.saldo);
                    return;
                case 2:
                    system("cls");
                    printf("\t===== SALDO CONTA POUPANCA =====\n\n");
                    printf("\tSALDO.................... %.2f\n\n",cliente.saldo);
                    return;
                default:
                    system("cls");
                    printf("\n\t===== Valor Invalido ====\n\t");
                    printf("Tente Novamente!!!\n\n");
                    system("pause");
                }
            }
            while (opcao != 1 && opcao != 2);


        case 2: //Opção para extrato.
            do
            {
                system("cls");
                printf("\t========= EXTRATO =========\n\n");
                printf("\tDigite 1 para CONTA CORRENTE\n");
                printf("\tDigite 2 para CONTA POUPANCA\n\t\t");
                scanf("%i", &opcao);
                switch (opcao)
                {
                case 1:
                    system("cls");
                    printf("===== EXTRATO CONTA CORRENTE =====\n\n");
                    printf("\tBanco............... Banco G6\n");
                    printf("\tValor Atual......... %.2f\n",cliente.saldo);
                    for(int c = 0; c<5; c++)
                    {
                        printf("\tSaque [%i]............... %.2f\n",c+1,cliente.historicoSaque[c]);
                    }
                    printf("\tConta............... %i\n\n",cliente.numConta);
                    return;

                case 2:
                    system("cls");
                    printf("===== EXTRATO CONTA POUPANCA =====\n\n");
                    printf("\tBanco............... banco x\n");
                    printf("\tValor Atual......... %.2f\n",cliente.saldo);
                    for(int c = 0; c<5; c++)
                    {
                        printf("\tSaque [%i]............... %.2f\n",c+1,cliente.historicoSaque[c]);
                    }
                    printf("\tConta............... %i\n\n",cliente.numConta);
                    return;
                default:
                    system("cls");
                    printf("\n\t===== Valor Invalido ====\n\t");
                    printf("Tente novamente!!!\n\n");
                    system("pause");
                }
            }
            while (opcao != 1 && opcao != 2);
        default:
            system("cls");
            printf("\n\t===== Valor Invalido ====\n\t\t", 160);
        }
    }
    while (opcao != 1 && opcao != 2);
}

void transferencia(conta &cliente,conta &contaRecebe)
{
    float valortransferencia;
    int contatrans,agenciatrans;

    printf("========== TRANSFERENCIA ==========\n");
    printf ("Digite a quantia em reias que deseja transferir: \n") ;
    scanf("%f",&valortransferencia);
    if (valortransferencia>cliente.saldo)
    {
        printf( "Saldo insuficiente" );

    }
    else if (cliente.saldo>=valortransferencia)
    {
        printf(" Transferencia Efetuada!");
        cliente.saldo = cliente.saldo-valortransferencia;
        contaRecebe.saldo += valortransferencia;
    }
    system("Pause");
}
void deposito(conta &cliente)
{
    float dinheiroAdepo;
    printf("\nInforme o valor a ser depositado: ");
    scanf("%f",&dinheiroAdepo);
    cliente.saldo += dinheiroAdepo;
    printf("\n\nDepositado com sucesso!\n");
    system("pause");
    system("cls");
}



#endif // FUCTIONS_H_INCLUDED
