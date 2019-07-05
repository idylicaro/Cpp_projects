#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>
#include <conio.h>

#include "BibliotecaBG6.h"
#include "BibliotecaMenuBG6.h"
#include "fuctions.h"
#include "principal.h"
int seisdigitos();
void telinhaC();
void telinhaS();
void bg6();
void senhaa();



main()
{
    int menuOpcao;

    clrscr();
    bancog6();
    system("cls");
    system("color 1f");
    char digitos[20];
    int cont;
    int senha, contador = 2;
//telinha();

    do
    {
        telinhaC();
        bg6();
        gotoxy(52,22);
        printf("CONTA: ");
        scanf("%s",&digitos);
        telinhaS();
        gotoxy(52,26);
        printf("SENHA: ");
        scanf("%d", &senha);
        // aqui as credenciais estão corretas
        if (!strcmp (digitos,"2019") && senha == 123)
        {
            gotoxy(51,29);
            printf("ACESSO CONCEDIDO.\n");
            gotoxy(51,30);
            printf("BEM VINDO, SR. CARLOS VICTOR ANDRADE DE JESUS");
            //delay(3000);
            clrscr();
            gotoxy(51,33);
            clrscr();
            //delay(2000);
            //system("cls");
            //clrscr();
            system("cls");
            principal(menuOpcao);
            break;
        }
        gotoxy(51,29);
        printf("NUMERO DA CONTA E/OU SENHA INCORRETOS!!!\n");
        gotoxy(51,30);
        printf("VOCE VAI PARA A SUA %d TENTATIVA.\n",contador);
        //delay(4000);
        system("cls");

        contador++;
    }
    while (contador < 5);
    if (contador == 5)
    {
        clrscr();
        gotoxy(3,20);
        printf("Limite de tentativas alcancadas.\n");
        gotoxy(3,21);
        printf("ATENCAO CLIENTE!!! ALGO NAO ESTA CORRETO.");
        gotoxy(3,22);
        printf("SUA SENHA DE 4 DIGITOS FOI BLOQUEADA.");
        gotoxy(3,23);
        printf("PARA TENTAR UM NOVO ACESSO.");
        gotoxy(3,24);
        printf("DIGITE O NUMERO DA CONTA + SENHA DE 6 DIGITOS..");
        seisdigitos();


    }
//clrscr();
    system("cls");

//printf("Fim.\n");
    return (0);
}

int seisdigitos()
{

    system("color 1f");
    int cont;
    char sequencia[7];
    int conta, contador=0;
    do
    {
        telinhaC();
        bg6();
        gotoxy(52,22);
        printf("CONTA: ");
        scanf("%d",&conta);
        telinhaS();
        gotoxy(52,26);
        printf("SENHA DE 6 DIGITOS: ");
        scanf("%s",&sequencia);
        if(!strcmp(sequencia,"102030") && conta==2019)
        {
            gotoxy(20,30);
            printf("OLA, SR. CARLOS VICTOR ANDRADE DE JESUS. BEM VINDO AO BANCO G6");
            //menubancog6();
            //clrscr();
            break;
        }
        contador++;
    }
    while(contador<1);
    if(contador==1)
    {
        gotoxy(20,30);
        printf("NAO E POSSIVEL ENTRAR NA SUA CONTA.");
        gotoxy(20,31);
        printf(" ENTRE EM CONTATO COM A CENTRAL!!!");
    }
    gotoxy(20,32);
    printf("O BANCO G4 AGRADECE.");
    //delay(2000);

    return(0);

}




