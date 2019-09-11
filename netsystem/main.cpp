#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 0a");

    short int x;
    string code,endereco;
    do
    {
        cout << "MENU\n[1]-DNS Primario\n[2]-PING UOL\n[3]-Limpar cache dns\n[4]-Traceroute\n[5]-Sair\n\nDigite a opcao:";
        cin >> x;

        system("cls");
        if(x==1)
        {
            system("ping 177.20.209.115");
            cout <<"\n"<<endl;
            system("pause");
        }
        else if(x==2)
        {
            system("ping uol.com.br -t");
            cout <<"\n"<<endl;
            system("pause");
        }
        else if(x==3)
        {
            system("ipconfig /flushdns");
            cout <<"\n"<<endl;
            system("pause");
        }
        else if(x==4)
        {

            cout << "Digite o endereço : ";
            cin.ignore();
            getline(cin,endereco);
            code = "tracert -d "+endereco;

            system(code.c_str());
            cout <<"\n"<<endl;
            system("pause");

        }
        else if(x==5)
            exit(0);

        system("cls");
    }
    while(x!=5);
    return 0;
}
