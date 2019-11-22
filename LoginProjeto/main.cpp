#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <errno.h>

#include "archiveBasic.h"
#include "loginBackand.h"
#include "cadastroBackand.h"

using namespace std;
// "bdcontas.txt"


int main()
{
    short int opcaoMenu = 0;
    conta usuario;
    fstream fileTextbanco;
    openArchive_Out(fileTextbanco,"bdcontas.txt");
    closeArchive(fileTextbanco);
    do
    {
        cout <<"[1]Login"<<"\n"<<"[2]Cadastrar"<<"\n"<<"[3]Sair"<<endl;
        cin >>opcaoMenu;

        switch(opcaoMenu)
        {
        case 1:
            login(fileTextbanco,"bdcontas.txt");
            system("cls");
            break;
        case 2:
            cadastro(fileTextbanco,"bdcontas.txt");
            system("cls");
            break;
        }

    }
    while(opcaoMenu !=3);
    return 0;
}
