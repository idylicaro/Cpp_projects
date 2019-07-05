#ifndef PRINCIPAL_H_INCLUDED
#define PRINCIPAL_H_INCLUDED



#endif // PRINCIPAL_H_INCLUDED

void bg6();
int contadorDeSaque = 0;

void incializacaoContas(conta &usuarioV,int n);

int principal(int &menuOpcao)
{
    //int menuopcao;
    //int menuOpcao = 0;
    int n = 0; //conntador pra saber qual a conta atual , e tambem pra fazer tranferencia!
    int nCRecebe;//contador da conta que vai receber a transferencia
    short int opcaoTrans;
    const float taxa = 3.50;

    conta usuario[2];
    incializacaoContas(usuario[0],0); // aqui como vai ser duas conta n precisa botar variavel ,
    incializacaoContas(usuario[1],1); //  mais se quisesse poderia automatizar pra botar muitas contas com um for;

    do
    {
        menubancog6(menuOpcao);

        switch (menuOpcao)
        {
        case 1:
            fSaque(usuario[n],contadorDeSaque);

            break;
        case 2:
            saldoExtrato(usuario[n]);

            break;
        case 3:
            //gotoxy(20,22);
            deposito(usuario[n]);

            break;
        case 4:
            clrscr();
            system("color 1f");
            gotoxy(52,17);
            printf("[1]Transferencia Bancaria\n");
            gotoxy(52,18);
            printf("[2]Pagamento ");
            scanf("%d",&opcaoTrans);

            if(opcaoTrans==1)
            {
                clrscr();
                system("color 1f");
                telinha1();
                gotoxy(52,22);
                printf("Digito final da conta que vai receber: ");
                scanf("%d",&nCRecebe);
                nCRecebe -= 1;
                transferencia(usuario[n],usuario[nCRecebe]);
                gotoxy(52,36);
                //system("pause");
            }
            else if(opcaoTrans==2)
            {
                clrscr();
                system("color 1f");
                telinha1();
                gotoxy(52,22);
                printf("Digito final da conta que vai receber: ");
                scanf("%d",&nCRecebe);
                nCRecebe -= 1;
                transferencia(usuario[n],usuario[nCRecebe],taxa);
                gotoxy(52,36);
            }
            clrscr();

            break;
        case 5:
            clrscr();
            system("color 1f");
            gotoxy(52,15);
            printf("*****************************************");
            gotoxy(52,16);
            printf("        CENTRAL DE AJUDA BG6");
            gotoxy(52,17);
            printf("*****************************************");
            gotoxy(52,19);
            printf("SEGUE ABAIXO OS CANAIS DE AJUDA E SUPORTE AO CLIENTE DO BANCO BG6");
            gotoxy(52,21);
            printf(">>>>>> ENDERECO: RUA DO FLUXO, Nº 919");
            gotoxy(52,22);
            printf(">>>>>> TELEFONE: 0800 000 111");
            gotoxy(52,23);
            printf(">>>>>> WHATSAPP: 79 9 9999 9999");
            gotoxy(52,24);
            printf(">>>>>> REDES SOCIAIS: ");
            gotoxy(52,25);
            printf("           **FACEBOOK: BANCOG6");
            gotoxy(52,26);
            printf("           **TWITTER : _BG6");
            gotoxy(52,27);
            printf("           **E-MAIL  : BANCOBG6BR@DESENVOLVER.COM.BR");
            gotoxy(100,33);
            printf("ESSE E UM SISTEMA DESENVOLVIDO POR: ");
            gotoxy(100,34);
            printf(">>>>> CARLOS VICTOR ANDRADE DE JESUS");
            gotoxy(100,35);
            printf(">>>>> CLEBER SANTANA DOS SANTOS");
            gotoxy(100,36);
            printf(">>>>> IDYL ICARO DOS SANTOS");
            gotoxy(100,37);
            printf(">>>>> JOSE NATHANAEL SANTOS MATOS");
            gotoxy(100,38);
            printf(">>>>> LUIZ EDUARDO MENDONCA MARRANO");

            gotoxy(52,44);
            system("pause");
            clrscr();
            break;
        default :
            clrscr();
            system("color 1f");
            bg6();
            gotoxy(52,26);
            printf("****************************************");
            gotoxy(52,27);
            printf("O BANCO G6 AGRADECE E VOLTE SEMPRE !!!");
            gotoxy(52,29);
            printf("****************************************");
            gotoxy(52,31);
            system("pause");
        }
    }
    while(menuOpcao!=6);

    return 0;
}

void incializacaoContas(conta &usuarioV,int n)
{
    usuarioV.numConta = (n+1);
}
