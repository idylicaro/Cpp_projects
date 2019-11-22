#ifndef CADASTROBACKAND_H_INCLUDED
#define CADASTROBACKAND_H_INCLUDED

void caixaDeCadastro(conta& temp);

void cadastro(fstream& archive,char nomeArchive[15])
{
    conta usuario;
    openArchive_Out(archive,nomeArchive);

    caixaDeCadastro(usuario);

    if(!archive.is_open())
    {
        printf("%s\n", strerror(errno));
        cout << "Algo de errado com o Banco de Dados\n";
        system("pause");
    }
    else
    {
        archive <<usuario.login<<" "<<usuario.senha<<endl;
    }

    closeArchive(archive);

}
void caixaDeCadastro(conta& temp)
{
    cout<<"[CADASTRO]\n"<<endl;
    cout << "[LOGIN]:"<<endl;
    cin >>temp.login;
    cout << "[Senha]:"<<endl;
    cin>>temp.senha;
}
#endif // CADASTROBACKAND_H_INCLUDED
