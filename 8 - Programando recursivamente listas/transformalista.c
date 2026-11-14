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


// -- escreva seu código abaixo, não altere esta linha

void transforma_lista(NoLista * p){
    if(p==NULL || p->prox==NULL) return;

    NoLista * q = p;
    NoLista * novo = criar_no(q->valor+q->prox->valor, q->prox);
    q->prox = novo;
    transforma_lista(p->prox->prox);
}

int main() {
    transforma_lista(p);    
}
