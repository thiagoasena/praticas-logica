#include <iostream>

using namespace std;

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    cout << "Digite um número inteiro: ";
    cin >> num;

    originalNum = num; // Armazena o número original

    // Inverte o número
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Verifica se o número invertido é igual ao número original
    if (originalNum == reversedNum) {
        cout << originalNum << " é um número palíndromo." << endl;
    } else {
        cout << originalNum << " não é um número palíndromo." << endl;
    }

    return 0;
}
