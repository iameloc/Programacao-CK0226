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



// -- escreva seu código abaixo, não altere esta linha

int numero_trecho_nao_decrescente(NoLista * p, int qtd){
	if(p==NULL || p->prox==NULL) return qtd;

	NoLista * q = p;
	while(q->prox!=NULL && q->valor<=q->prox->valor){
		q = q->prox;
	}
	qtd++;
	return numero_trecho_nao_decrescente(q->prox, qtd);
}

int main() {
	resp = numero_trecho_nao_decrescente(p, 0);
}