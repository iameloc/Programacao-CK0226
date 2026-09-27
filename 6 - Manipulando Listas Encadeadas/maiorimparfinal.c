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



int main() {
    NoLista *q = p;
    NoLista *qant = NULL;
    NoLista *mant = NULL;
    NoLista *m = NULL;

    while(q != NULL){
        if(q->valor %2 != 0 ){
            m = q; mant = qant; break;
        }
        qant = q;
        q = q->prox;
    }

    while(q != NULL){
        if(q->valor %2 != 0 && q->valor > m->valor){
            m = q; mant = qant;
        }
        qant = q;
        q = q->prox;
    }

  if (m != NULL && m != qant) { 
      if (mant == NULL) {
          p = m->prox;          
      } else {
          mant->prox = m->prox; 
      }
  
      qant->prox = m;           
      m->prox = NULL;
	}
}