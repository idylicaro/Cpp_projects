#include <stdio.h>
#include <stdlib.h>

#include "fuctions.h"

int contadorDeSaque = 0;

void incializacaoContas(conta &usuarioV,int n);

int main()
{
    int menuOpcao = 0;
    int n = 0; //conntador pra saber qual a conta atual , e tambem pra fazer tranferencia!
    int nCRecebe;//contador da conta que vai receber a transferencia

    conta usuario[2];
    incializacaoContas(usuario[0],0); // aqui como vai ser duas conta n precisa botar variavel ,
    incializacaoContas(usuario[1],1); //  mais se quisesse poderia automatizar pra botar muitas contas com um for;

    do{
    scanf("%d",&menuOpcao);

    switch (menuOpcao)
    {
    case 1:
        fSaque(usuario[n],contadorDeSaque);
        break;
    case 2:
        saldoExtrato(usuario[n]);
        break;
    case 3:
        deposito(usuario[n]);
        break;
    case 4:
        printf("Digite A conta que vai receber !!!\n");
        scanf("%d",&nCRecebe);
        nCRecebe -= 1;
        transferencia(usuario[n],usuario[nCRecebe]);
        break;
    case 5:
        system("pause");
        break;
    default :
        printf("Nenhuma opcao selecionada!\n");
        system("pause");
    }
    }while(menuOpcao!=6);

    return 0;
}

void incializacaoContas(conta &usuarioV,int n){
    usuarioV.numConta = (n+1);
}
