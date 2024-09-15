#include <iostream>

using namespace std;

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

    printarVetor(vet,3);

    modificaVetor(vet,3);

    printarVetor(vet,3);

    return 0;

}