#ifndef LOGINBACKAND_H_INCLUDED
#define LOGINBACKAND_H_INCLUDED

#include <fstream>
#include <errno.h>
#include <string.h>
#include <iomanip>
#include <cstdlib>
struct conta
{
    string login;
    string senha;
};
void caixaDeLogin(conta& temp)
{
    cout << "[LOGIN]:"<<endl;
    cin >>temp.login;
    cout << "[Senha]:"<<endl;
    cin>>temp.senha;
}

void login(fstream& archive,char nomeArchive[15])
{
    short int validationLogin = 2;
    conta usuario,dbUsuario;


    openArchive_In(archive,nomeArchive);


    if(archive.is_open())
    {
        caixaDeLogin(usuario);

        while(!archive.eof())
        {
            archive >>dbUsuario.login>>dbUsuario.senha;
            if((usuario.login==dbUsuario.login)&&(usuario.senha==dbUsuario.senha))
            {
                validationLogin=1;
                cout<< "\nLogando..."<<endl;
                system("pause");
                break;
            }
            else
            {
                validationLogin =0;
            }

        }
        if(validationLogin==0)
        {
            cout << "FALHA NO LOGIN,TENTE NOVAMENTE..."<<endl;
            system("pause");
        }
    }
    else
    {
        printf("%s\n", strerror(errno));
        cout << "Algo de errado com o Banco de Dados\n";
        system("pause");
    }



    closeArchive(archive);


}

#endif // LOGINBACKAND_H_INCLUDED
