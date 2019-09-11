#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <iomanip>

#include "backend.h" //biblioteca  criada para esse programa

using namespace std;


int main()
{   system("color F0");
    short int opction;

    do{
    cout << "[0]-Inicializar Base de dados\n"
         << "[1]-Cadastrar\n"
         << "[2]-Login\n"
         << "[3]-Listar Users\n"
         << "[4]-Atualizar User\n"
         << "[5]-Sair"<<endl;
        cin >>opction;

         switch(opction)
         {
        case 0:
            inicializar();
            system("cls");
            break;
        case 1:
            system("cls");
            cadastrar();
            system("pause");
            break;
        case 2:
            system("cls");
            login();
            system("pause");

            break;
        case 3:
            system("cls");
            visualizaUsers();
            system("pause");

            break;
        case 4:
            system("cls");
            atualizarInfo();
            system("pause");

            break;
        case 5:
            system("cls");
            break;
        default:
            cout << "Opção não existe !!";
         }
    }while(opction!=5);
    return 0;
}



