#ifndef BIBLIOTECAMENUBG6_H_INCLUDED
#define BIBLIOTECAMENUBG6_H_INCLUDED



#endif // BIBLIOTECAMENUBG6_H_INCLUDED

void menubancog6(int &n)
{
    //bancog6();
    system("color 1f");
    int contador;
    int a=223;

    for (contador=10; contador <=13; contador++)
    {
        gotoxy(30,contador);
        printf("\xdb                  \xdb");
        gotoxy(78,contador);
        printf("\xdb                 \xdb");

    }
    gotoxy(33,12);
    printf("1.SAQUE");
    gotoxy(31,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(31,13);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    for(contador=20; contador<=23; contador ++)
    {
        gotoxy(30,contador);
        printf("\xdb                  \xdb");
        gotoxy(78,contador);
        printf("\xdb                    \xdb");
    }
    gotoxy(33,22);
    printf("2.EXTRATO");
    gotoxy(31,20);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(31,23);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    for(contador=30; contador<=33; contador ++)
    {
        gotoxy(30,contador);
        printf("\xdb                    \xdb");
        gotoxy(78,contador);
        printf("\xdb                 \xdb");
    }
    gotoxy(33,32);
    printf("3.DEPOSITO");
    gotoxy(31,30);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(31,33);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    //******************************************************************************

    gotoxy(81,12);
    printf("4.PAGAMENTO");
    gotoxy(79,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(79,13);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
    //****************************************************************************

    gotoxy(80,22);
    printf("5.CENTRAL DE AJUDA");
    gotoxy(79,20);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(79,23);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
    //******************************************

    gotoxy(81,32);
    printf("6. SAIR");
    gotoxy(79,30);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(79,33);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    //************************************

    for(contador=2; contador<=36; contador++)
    {
        gotoxy(28,contador);
        printf("\xba");
        gotoxy(102,contador);
        printf("\xba");

    }
    gotoxy(28,7);
    printf("\xcc");
    gotoxy(28,2);
    printf("\xc9");
    //*******
    gotoxy(102,7);
    printf("\xb9");
    gotoxy(102,2);
    printf("\xbb");
    //**********
    gotoxy(28,36);
    printf("\xc8");
    gotoxy(102,36);
    printf("\xbc");
    for(contador=29; contador<=101; contador++)
    {
        gotoxy(contador,7);
        printf("\xcd");
        gotoxy(contador,2);
        printf("\xcd");
        gotoxy(contador,36);
        printf("\xcd");
    }
    gotoxy(43,4);
    printf("OLA, CLIENTE. DIGITE O NUMERO DA OPCAO QUE DESEJA: ");
    scanf("%d",&n);
    gotoxy(45,45);
    system("pause");

}
