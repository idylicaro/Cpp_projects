#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <iomanip>
#include <string.h>
using namespace std;
/*Arquivos
*Base_Dados.dat
*/
const char* nameArchive="Base_Dados.dat";
struct User{
    int id;
    char login[15];
    char senha[15];
};

void inicializar(){
    struct User adm = {1, "admin", "admin"};
    struct User vazio = {0,"",""};
    ofstream archive;
    archive.open(nameArchive,ios::out);

    if(archive.fail())
    {
        cout << "ALGUM PROBLEMA NO ARQUIVO...REABRA O PROGRAMA"<<endl;
    }
    archive.write((const char*)(&adm),sizeof(User));
    for(int i=0; i<100; i++)
    {
        archive.write((const char*)(&vazio),sizeof(User));
    }
    archive.close();
}
void verificaCadastrados(int &QuantUsuariosIn) // id automatico vericação de quanto usuarios ja estao cadastrados
{
    struct User usu;
    fstream archive;
    archive.open(nameArchive,ios::in);

    if(archive.fail())
    {
        cout << "ALGUM PROBLEMA NO ARQUIVO...REABRA O PROGRAMA"<<endl;
    }
    archive.read((char*)(&usu),sizeof(User));
    while(archive &&!archive.eof())
    {
        if(usu.id!=0)
            QuantUsuariosIn++;
        archive.read((char*)(&usu),sizeof(User));

    }
    archive.close();
}
void cadastrar(){
    struct User newUser;
    int quantIn=0;
    verificaCadastrados(quantIn);
    fstream archive;
    archive.open(nameArchive,ios::out|ios::in|ios::ate);

    if(archive.fail())
        cout << "ALGUM PROBLEMA NO ARQUIVO...REABRA O PROGRAMA"<<endl;

    cout <<"Digite o login: ";
    cin  >>newUser.login;
    cout << "Digite a Senha: ";
    cin  >>newUser.senha;
    cin.ignore();

    newUser.id = (quantIn)+1; //logica para por o proximo id ...

    archive.seekp((newUser.id-1)*sizeof(User));
    archive.write((const char*)(&newUser),sizeof(User));

    archive.close();
    system("CLS");
}
void visualizaUsers(){
    struct User usu;
    fstream archive;
    archive.open(nameArchive,ios::in);

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO ARQUIVO...REABRA O PROGRAMA"<<endl;
    }

    cout << "==================================================" << endl;
    cout << "===============Lista De Cadastrados===============" << endl;
    cout << "==================================================" << endl;

    cout << setiosflags(ios::left)
        <<setw(16) << "Login" << setw(2) << "|"
        <<setw(16) << "Senha" << setw(2) << "|" <<"\n"
        <<  "--------------------------------------------------"<<endl;

    archive.read((char*)(&usu),sizeof(User));
    while(archive &&! archive.eof()){
        if(usu.id != 0){
                cout << setiosflags(ios::left)
                << setw(16) << usu.login << setw(2) << "|"
                << setw(16) << usu.senha << setw(2) << "|"<<"\n"
                <<"--------------------------------------------------"<< endl;

        }
        archive.read((char*)(&usu),sizeof(User));
    }
    cout << "==================================================" << endl;
    archive.close();
}
void atualizarInfo(){
    short int opcao;
    fstream archive;
    struct User usuario;
    archive.open(nameArchive,ios::out|ios::ate|ios::in);

    if(archive.fail()){
        cout <<"ALGUM PROBLEMA COM SEU ARQUIVO BD ,FECHE E TENTE NOVAMENTE!"<<endl;
    }
    cout<< "Informe o id referente a Atualizao"<<endl;
    cin >> usuario.id;

    archive.seekg((usuario.id-1)*sizeof(User));
    archive.read((char*)(&usuario),sizeof(User));

    cout << "-- ATUALIZAR INFORMAES --"<<endl;
    cout << "[1]- Login\n"
         << "[2]- Senha\n"<<endl;
    cin >>opcao;

    switch (opcao)
    {
    case 1:
        cout<<"Novo Login"<<endl;
        cin >>usuario.login;
        break;
    case 2:
        cout<<"Novo Senha"<<endl;
        cin >>usuario.senha;
        break;
    default:
        cout <<"Opção não existe!!!"<<endl;
    }

    archive.seekp((usuario.id-1)*sizeof(User));
    archive.write((const char*)(&usuario),sizeof(User));

    archive.close();
}
void login(){
    char login[15],senha[15];
    struct User usuario;
    short int have =0;
    ifstream archive;
    archive.open(nameArchive,ios::in);

    cout <<setw(6)<<"Login:"; cin >> login;
    cout <<setw(6)<<"Senha:"; cin >> senha;

    archive.read((char*)(&usuario),sizeof(User));

    while(archive  && !archive.eof()){
            if(usuario.id!=0){
                if(strcmp(login,usuario.login)==0 && strcmp(senha,usuario.senha)==0)
                    have++;
            }
            archive.read((char*)(&usuario),sizeof(User));

    }
    if(have==1){
        cout << "USUARIO LOGADO!"<<endl;
                    system("pause");
    }


    archive.close();
}
