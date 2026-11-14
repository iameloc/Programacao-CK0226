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


/*
a inicialização será feita no sistema de tarefas
p = criar_no(5, criar_no(8, criar_no(13, criar_no(2, NULL))));
*/


// -- escreva seu código abaixo, não altere esta linha

NoLista * remove_duplicadas(NoLista * p){
    if(p==NULL) return NULL;
    if(p->prox==NULL) return p;

    if(p->valor==p->prox->valor){
        return remove_duplicadas(p->prox);
    }else{
        p->prox = remove_duplicadas(p->prox);
        return p;
    }
}

int main() {
    p = remove_duplicadas(p);
}
