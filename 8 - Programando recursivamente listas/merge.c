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
        p->prox = merge(p->prox,q);
        return p;
    }else{
        q->prox = merge(p,q->prox);
        return q;
    }

}

int main(){
    r = merge(p,q);
}