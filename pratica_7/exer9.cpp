#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Por favor, digite um número inteiro positivo." << endl;
        return 1; // Saída com erro
    }

    int primeiro = 0;
    int segundo = 1;
    int proximo;

    cout << "Sequência de Fibonacci até " << n << ": ";

    while (primeiro <= n) {
        cout << primeiro << " ";

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0; // Saída bem-sucedida
}
