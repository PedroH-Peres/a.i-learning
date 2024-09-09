#include <iostream>

using namespace std;

int evenOrOdd(int num){
    if(num%2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int sumTwoNumbers(int a, int b){
    return a+b;
}

int main(){
    int num1 = 2;
    int num2 = 3;

    cout << "Hello World!\n";

    cout << num1 << "-> Par(0) ou Impar(1): " << evenOrOdd(num1) << "\n";
    cout << num2 << "-> Par(0) ou Impar(1): " << evenOrOdd(num2) << "\n";

    cout << "Soma de " << num1 << " + " << num2 << ": " << sumTwoNumbers(num1, num2) << "\n";
}