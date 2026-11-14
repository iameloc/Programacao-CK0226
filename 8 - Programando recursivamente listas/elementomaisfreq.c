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

int elemento_frequente(NoLista * p, int maxelem, int maxfreq){
    if(p->prox==NULL) return maxelem;

    NoLista * q = p;
    int num = q->valor;
    int nmaxfreq = 0;

    while(q->prox != NULL && q->valor==num){
        nmaxfreq++;
        q = q->prox;
    }
    if(nmaxfreq > maxfreq){
        maxfreq = nmaxfreq;
        maxelem = num;
    }
    return elemento_frequente(q, maxelem, maxfreq);
}

int main() {
    if(p!=NULL) resp = elemento_frequente(p,p->valor,0);
}
