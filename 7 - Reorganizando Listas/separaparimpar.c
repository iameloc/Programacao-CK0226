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



int main(){
    NoLista * inicio_par = NULL; NoLista * fim_par = NULL;
    NoLista * inicio_impar = NULL; NoLista * fim_impar = NULL;
    NoLista * atual = p;

    while(atual != NULL){
        if(atual->valor % 2 == 0){
            if(inicio_par == NULL){
                inicio_par = atual;
                fim_par = atual;
            }else{
                fim_par->prox = atual;
                fim_par = atual;
            }
        }else{
            if(inicio_impar == NULL){
                inicio_impar = atual;
                fim_impar = atual;
            }else{
                fim_impar->prox = atual;
                fim_impar = atual;
            }
        }
        atual = atual->prox;
    }
    fim_impar->prox = NULL; //pq precisa dessa linha?

    if(inicio_par != NULL){
        fim_par->prox = inicio_impar;
        p = inicio_par;
    }else{
        p = inicio_impar;
    }
}
