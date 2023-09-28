#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Solicitar ao usuário um número inteiro
    cout << "Digite um número inteiro: ";
    cin >> num;

    originalNum = num;

    // Calcula o número de dígitos no número
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Verifica se é um número Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " é um número Armstrong." << endl;
    else
        cout << num << " não é um número Armstrong." << endl;

    return 0;
}
