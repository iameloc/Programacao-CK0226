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
    if(p==NULL) return 0;

    NoLista * atual = p;
    NoLista * ant = NULL;

    while(atual!=NULL && atual->valor%2==0){
        ant = atual;
        atual = atual->prox;
    }
    atual->valor *= 2;

    while(atual->prox!=NULL && atual->valor>atual->prox->valor){
        if(ant == NULL){
            ant = atual->prox;
            atual->prox = ant->prox;
            ant->prox = atual;
            p = ant;
        }else{
            ant->prox = atual->prox;
            ant = ant->prox;
            atual->prox = ant->prox;
            ant->prox = atual;
    	}
    }

}



