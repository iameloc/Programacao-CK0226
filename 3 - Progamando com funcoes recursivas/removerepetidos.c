// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 8

int L[N] = {2,3,4,1,2,3,4,6};

void remova_repetidos(int L[], int i, int j);

// -- escreva seu código abaixo, não altere esta linha

void remova_repetidos(int L[], int i, int j){
    if(i>j) return;
    if(L[i]==0) return;
    int k = i+1;
    while(k<=j){
        if(L[k]==L[i]){
            int l = k;
            while(l+1<=j){
                L[l] = L[l+1]; l++;
            }
            while(l<=j){
                L[l] = 0; l++;
            }
        }
        else k++;
    }
    remova_repetidos(L,i+1,j);
}


int main() {

	remova_repetidos(L, 0, N-1);
    for(int i = 0; i<N; i++){
        printf("%d ", L[i]);
    }
}