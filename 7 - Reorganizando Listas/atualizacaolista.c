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



int main() {
    NoLista *atual = p;
    NoLista *ant = NULL;

    while(atual != NULL && atual->valor%2 == 0){
        ant = atual;
        atual = atual->prox;
    }
    if(atual == NULL) return 0;
    atual->valor *= 2;

    if(atual->prox != NULL && atual->valor > atual->prox->valor){
        if(ant == NULL) p = atual->prox;
        else ant->prox = atual->prox;

        NoLista *nant = NULL;
        NoLista *natual = p;
        while(natual != NULL && natual->valor < atual->valor){
            nant = natual;
            natual = natual->prox;
        }

        if(nant == NULL){
            atual->prox = p;
            p = atual;
        } else {
            atual->prox = natual;
            nant->prox = atual;
        }
    }

}
