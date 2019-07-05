#ifndef BIBLIOTECABG6_H_INCLUDED
#define BIBLIOTECABG6_H_INCLUDED



#endif // BIBLIOTECABG6_H_INCLUDED




void bancog6()
{
    system("color 1f");
    int contador;
    int a=223;
    //textcolor(WHITE);




    for (contador=10; contador <=20; contador++)
    {
        gotoxy(30,contador);
        printf("\xdb           \xdb");
        gotoxy(47,contador);
        printf("\xdb          \xdb");
        gotoxy(64,contador);
        printf("\xdb          \xdb");
        gotoxy(81,contador);
        printf("\xdb");
        gotoxy(98,contador);
        printf("\xdb           \xdb");
        gotoxy(64,contador);
        printf("\xdb");

        //gotoxy(37,contador);
        //printf("\xdb     \xdb");

        // printf("\xdb");

    }
    gotoxy(31,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(31,15);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(31,20);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
    //A
    gotoxy(48,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(48,15);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");

    //N
    gotoxy(65,10);
    printf("\\\ ");
    gotoxy(65,11);
    printf(" \\\ ");
    gotoxy(65,12);
    printf("  \\\ ");
    gotoxy(65,13);
    printf("   \\\ ");
    gotoxy(65,14);
    printf("    \\\ ");
    gotoxy(65,15);
    printf("     \\\ ");
    gotoxy(65,16);
    printf("      \\\ ");
    gotoxy(65,17);
    printf("       \\\ ");
    gotoxy(65,18);
    printf("        \\\ ");

    //C

    gotoxy(82,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(91,10);
    printf("\xdb");
    gotoxy(91,11);
    printf("\xdb");
    gotoxy(82,20);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    //O

    gotoxy(99,10);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(99,20);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    //G
    for(contador=33; contador<=43; contador++)
    {
        gotoxy(64,contador);
        printf("\xdb");
        gotoxy(81,contador);
        printf("\xdb");
    }

    gotoxy(65,33);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(74,39);
    printf("\xdb");
    gotoxy(74,40);
    printf("\xdb");
    gotoxy(74,41);
    printf("\xdb");
    gotoxy(74,42);
    printf("\xdb");
    gotoxy(74,43);
    printf("\xdb");

    gotoxy(65,43);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
    gotoxy(69,38);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc");

    //4

    gotoxy(82,33);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(91,39);
    printf("\xdb");
    gotoxy(91,40);
    printf("\xdb");
    gotoxy(91,41);
    printf("\xdb");
    gotoxy(91,42);
    printf("\xdb");
    gotoxy(91,43);
    printf("\xdb");

    gotoxy(82,43);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");
    gotoxy(82,38);
    printf("\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc\xdc");

    gotoxy(80,48);
    printf("OLA, CLIENTE. SEJA BEM VINDO AO BANCO G4. PRESSIONE QUALQUER TECLA PARA CONTINUAR...");



    gotoxy(20,60);
    system("pause");
}


void telinhaC()
{
    int cont;
    for(cont=20; cont<=23; cont++)
    {
        gotoxy(50,cont);
        printf("\xdb");
        gotoxy(80,cont);
        printf("\xdb");
    }
    for(cont=50; cont<=80; cont++)
    {
        gotoxy(cont,20);
        printf("\xdc");
        gotoxy(cont,23);
        printf("\xdf");
    }
}
void telinhaS()
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

void bg6()
{
    int contador;
    for (contador=6; contador <=16; contador++)
    {
        gotoxy(30,contador);
        printf("\xdb              \xdb");
        gotoxy(52,contador);
        printf("\xdb");
        gotoxy(70,contador);
        printf("\xdb");
    }
    for(contador=31; contador<=44; contador++)
    {
        gotoxy(contador,6);
        printf("\xdf");
        gotoxy(contador,10);
        printf("\xdc");
        gotoxy(contador,16);
        printf("\xdc");

    }

    for(contador=53; contador<=64; contador++)
    {
        gotoxy(contador,6);
        printf("\xdf");
        gotoxy(contador,16);
        printf("\xdc");
    }

    for(contador=12; contador<=16; contador++)
    {
        gotoxy(64,contador);
        printf("\xdb");
        gotoxy(83,contador);
        printf("\xdb");
    }
    gotoxy(57,12);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf");

    for(contador=71; contador<=82; contador++)
    {
        gotoxy(contador,6);
        printf("\xdf");
        gotoxy(contador,16);
        printf("\xdc");
    }
    gotoxy(71,12);
    printf("\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf\xdf");
    gotoxy(45,45);
    system("pause");
}



