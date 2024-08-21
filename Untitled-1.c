#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Passagem {
    int ID;
    char ADO[3];
    char ADD[3];
    char CDO[99][99];
    char CDD[99][99];
    char DATA[99][99];
    char hora_partida[99][99];
    char hora_chegada[99][99];
    int VALOR_PASSAGEM;
};

void cadastrar_passagem(int op_menu) {



}

int main () {
struct Passagem Pa[100];
int contador_passagem = 0;
int op_menu = 0; //switch-case menu de opçoes para passagem
printf("Digite 1 para CADASTRAR passagem, 2 para EDITAR passagem e 3 para REMOVER passagem, 4 - passagem\n");
scanf("%d", &op_menu);

switch(op_menu) {
    case 1:
    cadastrar_passagem(op_menu);
    break;

}

}