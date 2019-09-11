#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
char* nameArchive = "bancoDados.dat";
struct funcionario {
        int id;
        char nome[15];
        char sexo;
        char cargo[15];
        char local[15];
        float salario;
};

void iniciaArchive(){
    fstream  archive;
    archive.open(nameArchive,ios::out);

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO SEU ARQUIVO!!!"<<endl;
    }
    struct funcionario usuarioVazio ={0,"",' ',"","",0.0};

    for(int i=0;i<100;i++){
        archive.write((const char*)(&usuarioVazio),sizeof(funcionario));
    }
    archive.close();
}
void inserir(){
    fstream  archive;
    archive.open(nameArchive,ios::out|ios::in|ios::ate);

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO SEU ARQUIVO!!!"<<endl;
    }
    struct funcionario usuario;
    cout<< "DIGITE NA SEGUINTE ORDEM:NUMERO,NOME,SEXO(M-F),CARGO,LOCAL,SALARIO"<<endl;
    cin>>usuario.id>>usuario.nome>>usuario.sexo>>usuario.cargo>>usuario.local>>usuario.salario;

    archive.seekp((usuario.id-1)*sizeof(funcionario));
    archive.write((const char*)(&usuario),sizeof(funcionario));

    archive.close();

}
void listar(){
    fstream  archive;
    archive.open(nameArchive,ios::in);

    struct funcionario usuLista;

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO SEU ARQUIVO!!!"<<endl;
    }
            cout << setiosflags(ios::left)
        << setw(10) << "ID"
        << setw(20) << "Nome"
        << setw(10) << "Sexo"
        << setw(15) << "Cargo"
        << setw(15) << "Local"
        << resetiosflags(ios::left)
        << setw(10) << "Saldo" << endl;

        archive.read((char*)(&usuLista),sizeof(funcionario));
        while(archive && !archive.eof()){
            if(usuLista.id!=0)
                    cout << setiosflags(ios::left)
                << setw(10) << usuLista.id
                << setw(20) << usuLista.nome
                << setw(10) << usuLista.sexo
                << setw(15) << usuLista.cargo
                << setw(15) << usuLista.local
                << resetiosflags(ios::left)<<setprecision(2)<<setiosflags(ios::fixed|ios::showpoint)
                << setw(10) << usuLista.salario << '\n';

            archive.read((char*)(&usuLista),sizeof(funcionario));
        }
        archive.close();
        system("pause");
        system("cls");
}
void  atualizarSalario(){
    struct funcionario usuario;
    fstream  archive;
    archive.open(nameArchive,ios::out|ios::in|ios::ate);

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO SEU ARQUIVO!!!"<<endl;
    }
    cout<<"Id do funcionario:"<<endl;
    cin>>usuario.id;

    archive.seekg((usuario.id-1)*sizeof(funcionario));
    archive.read((char*)(&usuario),sizeof(funcionario));

    cout << "Salario Retificado:"<<endl;
    cin  >>usuario.salario;

    archive.seekp((usuario.id-1)*sizeof(funcionario));
    archive.write((const char*)(&usuario),sizeof(funcionario));

    archive.close();

}
void remover(){
    struct funcionario usuarioVazio ={0,"",' ',"","",0.0};
    fstream  archive;
    archive.open(nameArchive,ios::out|ios::in|ios::ate);

    if(archive.fail()){
        cout << "ALGUM PROBLEMA NO SEU ARQUIVO!!!"<<endl;
    }
    int id;
    cout<<"Id do funcionario:"<<endl;
    cin>>id;

    archive.seekp((id-1)*sizeof(funcionario));
    archive.write((const char*)(&usuarioVazio),sizeof(funcionario));

    archive.close();
}
