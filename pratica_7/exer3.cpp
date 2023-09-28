#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Divisores de " << numero << ": ";

    // Itera de 1 até o número inserido pelo usuário
    for (int i = 1; i <= numero; i++) {
        // Verifica se i é um divisor de numero
        if (numero % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
