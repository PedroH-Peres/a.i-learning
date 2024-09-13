#include <iostream>

using namespace std;

int duplicar(int valor){
    return valor*2;
}

void duplicarPorPonteiro(int *valor){
    *valor = *valor * 2;
}

int main(){
    int a = 7;

    cout << a << "\n";

    a = duplicar(a);

    cout << "Resultado 1: " << a << "\n";

    //Realiza a mudança do valor direto no endereço de memória, evitando a necessidade de passar a referencia
    duplicarPorPonteiro(&a);

    cout << "Resultado 2: " << a << "\n";
}