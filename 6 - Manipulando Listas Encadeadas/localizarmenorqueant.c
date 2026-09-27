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

NoLista * q;

/*
a inicialização será feita no sistema de tarefas
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, NULL))));
*/


// -- escreva seu código abaixo, não altere esta linha



int main() {
    NoLista *ant = p;
    NoLista *atual = p->prox;
	NoLista *fimq = q;
    
	while(atual != NULL){
		if(ant->valor > atual->valor){
			NoLista *x = criar_no(atual->valor,NULL);
			if(q == NULL) q = x;
			else fimq->prox = x;
			fimq = x;
		}
		ant = atual;
		atual = atual->prox;
	}
}