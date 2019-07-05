#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// variavel Global
char usuario1[25],usuario2[25];

//estrutura tipo card
struct card{
    char nome[25];
    int id;
    int atk;
    int def;
};
//variavel usandoa estrutura card   nome:card_use
struct card card_use;
struct card card_use2;

//funçăo cabeçalho
void topo(){

    printf("*******************************************************************************\n");
    printf("***  ****  ****  ****     ****  *  *      *  *  *  *    ****  *****  **** ****\n");
    printf("*    *  *  *  *  *   *    *     *  **    **  *  *  *    *  *    *    *  * *  *\n");
    printf("*    ****  *  *  *   *      *   *  * *  * *  *  *  *    ****    *    *  * *  *\n");
    printf("***  *  *  *  *  ****     ****  *  *  **  *  ****  **** *  *    *    **** *  *\n");
    printf("*******************************************************************************\n");
    printf("\n\nBem vindo !!! Digite o nome do usuario 1:\n");
    gets(usuario1);
    printf("*******************************************************************************\n");
    printf("\n\nDigite o nome do usuario 2:\n");
    gets(usuario2);
    printf("*******************************************************************************\n");
}

void Mini_banco1(){
        switch (card_use.id)
{
    case 1 :
        strcpy(card_use.nome,"Insect Queen");
        card_use.atk = 2200;
        card_use.def = 2400;
        break;
    case 2 :
        strcpy(card_use.nome,"Great moth");
        card_use.atk = 2600;
        card_use.def = 2500;
        break;
    case 3 :
        strcpy(card_use.nome,"Skull Guardian");
        card_use.atk = 2050;
        card_use.def = 2500;
        break;
    case 4 :
        strcpy(card_use.nome,"Hammoth of Goldfine");
        card_use.atk = 2200;
        card_use.def = 1800;
        break;
    case 5 :
        strcpy(card_use.nome,"Crimson Sunbird");
        card_use.atk = 2300;
        card_use.def = 1800;
        break;
    case 6 :
        strcpy(card_use.nome,"Rabid Horseman");
        card_use.atk = 2000;
        card_use.def = 1700;
        break;
    case 7 :
        strcpy(card_use.nome,"Chimera Mythical");
        card_use.atk = 2100;
        card_use.def = 1800;
        break;
    case 8 :
        strcpy(card_use.nome,"Alligator's Sword");
        card_use.atk = 1700;
        card_use.def = 1500;
        break;
    case 9 :
        strcpy(card_use.nome,"Thunder Dragon");
        card_use.atk = 2800;
        card_use.def = 2100;
        break;
    case 10 :
        strcpy(card_use.nome,"Crab Turtle");
        card_use.atk = 2550;
        card_use.def = 2500;
        break;
    default :
        printf("Id invalido!\n");
    }
}
void Mini_banco2(){
        switch (card_use2.id)
{
    case 1 :
        strcpy(card_use2.nome,"Insect Queen");
        card_use2.atk = 2200;
        card_use2.def = 2400;
        break;
    case 2 :
        strcpy(card_use2.nome,"Great moth");
        card_use2.atk = 2600;
        card_use2.def = 2500;
        break;
    case 3 :
        strcpy(card_use2.nome,"Skull Guardian");
        card_use2.atk = 2050;
        card_use2.def = 2500;
        break;
    case 4 :
        strcpy(card_use2.nome,"Hammoth of Goldfine");
        card_use2.atk = 2200;
        card_use2.def = 1800;
        break;
    case 5 :
        strcpy(card_use2.nome,"Crimson Sunbird");
        card_use2.atk = 2300;
        card_use2.def = 1800;
        break;
    case 6 :
        strcpy(card_use2.nome,"Rabid Horseman");
        card_use2.atk = 2000;
        card_use2.def = 1700;
        break;
    case 7 :
        strcpy(card_use2.nome,"Chimera Mythical");
        card_use2.atk = 2100;
        card_use2.def = 1800;
        break;
    case 8 :
        strcpy(card_use2.nome,"Alligator's Sword");
        card_use2.atk = 1700;
        card_use2.def = 1500;
        break;
    case 9 :
        strcpy(card_use2.nome,"Thunder Dragon");
        card_use2.atk = 2800;
        card_use2.def = 2100;
        break;
    case 10 :
        strcpy(card_use2.nome,"Crab Turtle");
        card_use2.atk = 2550;
        card_use2.def = 2500;
        break;
    default :
        printf("Id invalido!\n");
    }
}

int Battle(int n){
    int v;

    if(n==1){
        if(card_use.atk>card_use2.def){
            v=1;
        }else if(card_use.atk==card_use2.def){
            v=3;
        }else if(card_use.atk < card_use2.def){
            v=2;
        }

        }else if(n==2){
            if(card_use2.atk>card_use.def){
                v=1;
            }else if(card_use2.atk==card_use.def){
                v=3;
            }else if(card_use2.atk < card_use.def){
            v=2;
        }
        }

    return v;
}


void Battle_Result(int z,int d){
  if(z==1){
if(d==1){
    printf("%s Win!\n",usuario1);
}else if(d==2){
    printf("%s Defeat!\n",usuario1);
}else if(d==3){
    printf("Draw\n");
}
}else if(z==2){
if(d==1){
    printf("%s Win!\n",usuario2);
}else if(d==2){
    printf("%s Defeat!\n",usuario2);
}else if(d==3){
    printf("Draw\n");
}
}
}


int main()
{
    int a,r,contador_loop;
    topo();

    printf("\nDigite (1) Para Continuar OU (2) Para Sair\n");

    while(scanf("%i",&contador_loop)!=2){
    //Primeiro Player!
    printf("\n%s  digite o id da carta !\n",usuario1);
    scanf("%i",&card_use.id);

    Mini_banco1();

    //Segundo Player!
   printf("\n%s  digite o id da carta !\n",usuario2);
    scanf("%i",&card_use2.id);

    Mini_banco2();




printf("->%s Card %i / %s / %i / %i\n",usuario1,card_use.id,card_use.nome,card_use.atk,card_use.def);
printf("->%s Card %i / %s / %i / %i\n",usuario2,card_use2.id,card_use2.nome,card_use2.atk,card_use2.def);


printf("\nQuem Ataca primeiro ? %s (1) ou %s (2)\n",usuario1,usuario2);
scanf("%i",&a);

r = Battle(a);
Battle_Result(a,r);

printf("\nDigite (1) Para Continuar OU (2) Para Sair\n");
}

    return 0;
}
