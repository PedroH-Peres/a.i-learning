#include <iostream>

using namespace std;

int numeroInteiro(){
    return 8;
}

float numeroFloat(){
    return 8.8;
}

char letra(){
    return 'a';
}

bool isTrue(){
    return true;
}

void helloWorld(){
    cout << "Hello World!\n";
}

int main(){
    int num;

    cout << "Sequencia de chamadas de funcoes: \n";
    cout << numeroInteiro() << "\n";
    cout << numeroFloat() << "\n";
    cout << letra() << "\n";
    cout << isTrue() << "\n";
    helloWorld();
    
    cout << "Digite um numero: ";
    cin >> num;
    
    system("cls");
    cout << "O numero digitado foi: " << num << "\n";
}