#include <iostream>

// Introducao ao C++
// Print em C++ e algumas revisões de C
// Pedro H Peres
//----------------------------------------

 
using namespace std;

#define LEN 3

int main(){

    int a = 1;
    float b = 2.2;
    char c = 'p';
    bool d = true;

    cout << "Valor int: " << a << "\n";
    cout << "Valor float: " << b << "\n";
    cout << "Valor char: " << c << "\n";
    cout << "Valor bool: " << d << "\n";

    int vetor[LEN] = {1,2,3};

    cout << "Vetor: ";
    for(int i = 0; i < LEN; i++){
        cout << vetor[i] << " ";
    }
    cout << "\n";

    int matriz[LEN][LEN] = {1,2,3,4,5,6,7,8,9,};

    cout << "Matriz: ";
    for(int i = 0; i < LEN; i++){
        for(int j = 0; j < LEN; j++){
            cout << matriz[i][j] << " ";
        }
    }
    cout << "\n";

}