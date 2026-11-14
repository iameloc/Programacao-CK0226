// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct NoLista{
	int valor;
	struct NoLista * prox;
} NoLista;

NoLista * criar_no(int valor, NoLista * prox){
	NoLista * no = malloc(sizeof(NoLista));
	no->valor = valor;
	no->prox = prox;
	return no;
}

NoLista * p;

int resp;

/*
a inicialização será feita no sistema de tarefas
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, NULL))));
*/


// -- escreva seu código abaixo, não altere esta linha

int impares_em_pos_impares(NoLista * p){
    if(p==NULL) return 0;
    if(p->prox==NULL){
        if(p->valor%2==0) return 0;
        else return 1;
    }

    if(p->valor%2!=0) return 1+impares_em_pos_impares(p->prox->prox);
    else return impares_em_pos_impares(p->prox->prox);
}

int main() {
    resp = impares_em_pos_impares(p);
}
