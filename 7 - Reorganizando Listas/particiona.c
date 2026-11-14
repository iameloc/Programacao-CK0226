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

int k = 10;


// -- escreva seu código abaixo, não altere esta linha



int main(){
	NoLista * inicio_menor = NULL;
	NoLista * fim_menor = NULL;
	NoLista * inicio_maior = NULL;
	NoLista * fim_maior = NULL;
	NoLista * atual = p;

	while(atual != NULL){
		if(atual->valor <= k){
			if(inicio_menor == NULL){
				inicio_menor = atual;
				fim_menor  = atual;
			}else{
				fim_menor->prox = atual;
				fim_menor = atual;
			}
		}else{
			if(inicio_maior == NULL){
				inicio_maior = atual;
				fim_maior = atual;
			}else{
				fim_maior->prox = atual;
				fim_maior = atual;
			}
		}
		atual = atual->prox;
	}

	if(inicio_menor == NULL){
		p = inicio_maior;
	}else{
		fim_menor->prox = inicio_maior;
		p = inicio_menor;
	}

}