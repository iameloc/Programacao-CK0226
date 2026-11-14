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
NoLista * r;





// -- escreva seu código abaixo, não altere esta linha

NoLista * merge(NoLista * p, NoLista * q){
    if(p==NULL) return q;
    if(q==NULL) return p;

    if(p->valor<=q->valor){
        r = p;
        p = p->prox;
    }else{
        r = q;
        q = q->prox;
    }
    NoLista * atual = r;

    while(p!=NULL && q!=NULL){
        if(p->valor <= q->valor){
            atual->prox = p;
            p = p->prox;
        }else{
            atual->prox = q;
            q = q->prox;
        }
        atual = atual->prox;
    }

    if(p==NULL) atual->prox = q;
    if(q==NULL) atual->prox = p;

    return r;
}

int main() {
    r = merge(p,q);
}
