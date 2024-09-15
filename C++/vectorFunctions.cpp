#include <iostream>

void printarVetor(int *vetor, int tamanho){

    for(int i = 0; i < tamanho;i++){
        cout << vetor[i] << "\n";
    }
}

void modificaVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i]+1;
    }
}

int main(){

    int vet[3] = {1,2,3};

    imprimeVetor(v,3);

    modificaVetor(v,3);

    imprimeVetor(v,3);

    return 0;

}