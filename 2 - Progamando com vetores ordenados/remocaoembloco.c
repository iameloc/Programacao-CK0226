// inclua as bibliotecas e definas as variáveis globais de entrada e saída do modelo
#include <stdlib.h>
#include <stdio.h>

#define N 10
#define M 5

int L[N] = {2,3,5,8,12,15,19,20,32,35};

int B[M] = {2,8,19,20,32};

// -- escreva seu código abaixo, não altere esta linha



int main() {
    int i = 0; //dedo no inicio de L
    int j = 0; //dedo no inicio de B
    int p = 0; //dedo no inicio de L

    while(i<N && j<M){
        if(L[i]==B[j]){ //nao estara em L final
            i++; //
        }
        else if(L[i]>B[j]) j++;
        else if(L[i]<B[j]){
            L[p] = L[i];
            i++; p++;
        }
    }

    while(i<N){
        L[p] = L[i];
        i++; p++;
    }

    while(p<N){
        L[p] = 0; p++;
    }
}