#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdio.h>

#include "backend.h"

using namespace std;

int main()
{

    int opcaoMenu;
    do
    {
        cout<< "[1]-Criar Arquivo\n[2]-Inserir funcionarios\n[3]-Listar Funcionarios\n[4]-Atualizar Salario\n[5]-Remover Funcionario\n[6]-Sair\n"<<endl;
        cin>>opcaoMenu;
        system("cls");

        switch(opcaoMenu)
        {
        case 1:
            iniciaArchive();
            system("cls");
            break;
        case 2:
            inserir();
            break;
        case 3:
            listar();
            break;
        case 4:
            atualizarSalario();
            break;
        case 5:
            remover();
            break;
        }
        system("cls");
    }
    while(opcaoMenu!=6);

    return 0;
}
