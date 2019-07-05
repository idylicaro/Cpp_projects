#ifndef FUCTIONS_H_INCLUDED
#define FUCTIONS_H_INCLUDED



#endif // FUCTIONS_H_INCLUDED

void telinha1();
void telinha2();
void telinhaC();
void telinhaS();
void telinha3();

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
    clrscr();
    system("color 1f");
    do
    {
        telinhaC();
        gotoxy(52,22);
        printf("Digite 1 para SALDO");
        telinha2();
        gotoxy(52,26);
        printf("Digite 2 para EXTRATO |: ");
        scanf("%i", &opcao);
        clrscr();
        switch (opcao)
        {
        case 1: // Opção para saldo.
            do
            {
                system("cls");
                telinhaC();
                gotoxy(52,22);
                printf("======== S A L D O ========");
                telinha2();
                telinha3();
                gotoxy(52,26);
                printf("1 -> CONTA CORRENTE");
                gotoxy(52,30);
                printf("2 -> CONTA POUPANCA |:");
                scanf("%i", &opcao);

                switch (opcao)
                {
                case 1:
                    system("cls");
                    telinhaC();
                    telinhaS();
                    gotoxy(52,22);
                    printf("=== SALDO CONTA CORRENTE ===");
                    gotoxy(52,26);
                    printf("\tSALDO............%.2f\n\n",cliente.saldo);
                    gotoxy(52,30);
                    system("pause");
                    clrscr();
                    return;
                case 2:
                    system("cls");
                    telinhaC();
                    telinhaS();
                    gotoxy(52,22);
                    printf("=== SALDO CONTA POUPANCA ===");
                    gotoxy(52,26);
                    printf("SALDO.............%.2f",cliente.saldo);
                    gotoxy(52,30);
                    system("pause");
                    clrscr();
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
                telinhaC();
                gotoxy(52,22);
                printf("===== EXTRATO =====");
                telinha2();
                telinha3();
                gotoxy(52,26);
                printf("1 -> CONTA CORRENTE");
                gotoxy(52,30);
                printf("2 -> CONTA POUPANCA |: ");
                scanf("%i", &opcao);
                switch (opcao)
                {
                case 1:
                    system("cls");
                    telinhaC();
                    gotoxy(52,22);
                    printf("== EXTRATO CONTA CORRENTE ==");
                    gotoxy(52,26);
                    printf("BANCO............BANCO G6");
                    gotoxy(52,27);
                    printf("VALOR ATUAL......%.2f",cliente.saldo);
                    //gotoxy(52,28);
                    printf("\n");
                    for(int c = 0; c<5; c++)
                    {
                        //gotoxy(52,29);
                        printf("\t\t\t\t\t           SAQUE [%i]........ %.2f\n",c+1,cliente.historicoSaque[c]);
                    }
                    gotoxy(52,33);
                    printf("CONTA........%i",cliente.numConta);
                    gotoxy(52,34);
                    system("pause");
                    system("cls");
                    return;

                case 2:
                    system("cls");
                    telinhaC();
                    gotoxy(52,22);
                    printf("== EXTRATO CONTA POUPANCA ==");
                    gotoxy(52,26);
                    printf("BANCO............... BANCO G6");
                    gotoxy(52,27);
                    printf("VALOR ATUAL......... %.2f",cliente.saldo);
                    printf("\n");
                    for(int c = 0; c<5; c++)
                    {
                        printf("\t\t\t\t\t           SAQUE [%i]........ %.2f\n",c+1,cliente.historicoSaque[c]);
                    }
                    gotoxy(52,33);
                    printf("CONTA............... %i\n\n",cliente.numConta);
                    gotoxy(52,34);
                    system("pause");
                    system("cls");
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

    telinha2();

    gotoxy(52,26);
    printf("====== TRANSFERENCIA ======");
    gotoxy(52,29);
    printf ("DIGITE O VALOR EM REAIS QUE DESEJA TRANSFERIR: ") ;
    scanf("%f",&valortransferencia);
    if (valortransferencia>cliente.saldo)
    {
        gotoxy(52,32);
        printf( "SALDO INSUFICIENTE!!!" );

    }
    else if (cliente.saldo>=valortransferencia)
    {
        printf(" TRANSFERENCIA EFETUADA!!!");
        cliente.saldo = cliente.saldo-valortransferencia;
        contaRecebe.saldo += valortransferencia;
    }
    gotoxy(52,35);
    system("Pause");
}
void transferencia(conta &cliente,conta &contaRecebe,float taxa)
{
    float valortransferencia;
    int contatrans,agenciatrans;

    telinha2();

    gotoxy(52,26);
    printf("====== TRANSFERENCIA ======");
    gotoxy(52,29);
    printf ("DIGITE O VALOR EM REAIS QUE DESEJA TRANSFERIR: ") ;
    scanf("%f",&valortransferencia);
    if (valortransferencia>cliente.saldo)
    {
        gotoxy(52,32);
        printf( "SALDO INSUFICIENTE!!!" );

    }
    else if (cliente.saldo>=valortransferencia)
    {
        printf(" TRANSFERENCIA EFETUADA!!!");
        valortransferencia +=taxa;
        cliente.saldo = cliente.saldo-valortransferencia;
        contaRecebe.saldo += valortransferencia;
    }
    gotoxy(52,35);
    system("Pause");
}
int deposito(conta &cliente)
{
    float dinheiroAdepo;
    clrscr();
    system("color 1f");
    telinha1();
    gotoxy(52,22);
    printf("INFORME O VALOR A SER DEPOSITADO: ");
    //gotoxy(52,21);
    scanf("%f",&dinheiroAdepo);
    telinha2();
    gotoxy(52,26);
    printf("Depositado com sucesso!");
    gotoxy(52,28);
    system("pause");
    system("cls");
    return cliente.saldo += dinheiroAdepo;
}

void telinha1()
{
    int cont;
    for(cont=20; cont<=23; cont++)
    {
        gotoxy(50,cont);
        printf("\xdb");
        gotoxy(100,cont);
        printf("\xdb");
    }
    for(cont=50; cont<=100; cont++)
    {
        gotoxy(cont,20);
        printf("\xdc");
        gotoxy(cont,23);
        printf("\xdf");
    }
}
void telinha2()
{
    int cont;
    for(cont=24; cont<=27; cont++)
    {
        gotoxy(50,cont);
        printf("\xdb");
        gotoxy(80,cont);
        printf("\xdb");
    }
    for(cont=50; cont<=80; cont++)
    {
        gotoxy(cont,24);
        printf("\xdc");
        gotoxy(cont,27);
        printf("\xdf");
    }
}

void telinha3()
{
    int cont;
    for(cont=28; cont<=31; cont++)
    {
        gotoxy(50,cont);
        printf("\xdb");
        gotoxy(80,cont);
        printf("\xdb");
    }
    for(cont=50; cont<=80; cont++)
    {
        gotoxy(cont,28);
        printf("\xdc");
        gotoxy(cont,31);
        printf("\xdf");
    }
}
