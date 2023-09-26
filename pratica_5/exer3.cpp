#include <iostream>
#include <iomanip> // Para controle de formato de saída
using namespace std;

int main() {
    int a, b, c;

    // Solicitar ao usuário para digitar dois números inteiros
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    // c é a soma de a e b em formato hexadecimal
    c = a + b;
    cout << "Soma de a e b em hexadecimal: 0x" << hex << c << endl;

    // c é o produto de a e b em formato octal
    c = a * b;
    cout << "Produto de a e b em octal: 0" << oct << c << endl;

    // c é o módulo (valor absoluto) da diferença entre a e b
    if (a >= b)
        c = a - b;
    else
        c = b - a;
    cout << "Módulo da diferença entre a e b: " << c << endl;

    // Verificação se a divisão é possível e calculo do quociente
    if (b != 0) {
        c = a / b;
        cout << "Quociente de a por b: " << c << endl;

        // Verificação se a é divisível por b
        if (a % b == 0) {
            cout << "a é divisível de forma exata por b." << endl;
        } else {
            cout << "a não é divisível de forma exata por b." << endl;
        }
    } else {
        cout << "Divisão por zero não é possível." << endl;
    }

    return 0;
}
