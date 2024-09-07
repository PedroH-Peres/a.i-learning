#include <iostream>

using namespace std;

//Ponteiros armazenam o endereço de memória da variavel que ele esta apontando

int main(){
    int a = 2;

    int *ponteiro;
    ponteiro = &a;
    
    cout << ponteiro << "\n"; //Endereço de "a"
    cout << *ponteiro << "\n"; //Conteudo de "a"

    //O Uso de * indica "Conteudo apontado por"
    *ponteiro = 32; //Trocando o conteudo de "a"
    cout << *ponteiro;
}