#include <iostream>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite dois caracteres
    cout << "Digite o primeiro caractere: ";
    cin >> ch1;
    cout << "Digite o segundo caractere: ";
    cin >> ch2;

    // Encontra o caractere que precede ch1
    if (ch1 > 0) {
        ch3 = ch1 - 1;
    } else {
        ch3 = '_';
    }

    // Imprime o caractere em diferentes formatos
    cout << "Caractere ch1 em decimal: " << int(ch1) << endl;
    cout << "Caractere ch1 em octal: " << oct << int(ch1) << endl;
    cout << "Caractere ch1 em hexadecimal: " << hex << int(ch1) << endl;
    cout << "Caractere ch1: " << ch1 << endl;

    // Encontra o caractere que precede ch2
    if (ch2 > 0) {
        ch3 = ch2 - 1;
    } else {
        ch3 = '_';
    }

    // Imprime o caractere em diferentes formatos
    printf("Caractere ch2 em decimal: %d\n", int(ch2));
    printf("Caractere ch2 em octal: %o\n", int(ch2));
    printf("Caractere ch2 em hexadecimal: %x\n", int(ch2));
    printf("Caractere ch2: %c\n", ch2);

    // Verifica se ch1 é letra maiúscula e atribui 'A' ou espaço
    ch3 = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : ' ';

    // Imprime o valor de ch3
    cout << "Valor de ch3 para ch1: " << ch3 << endl;

    // Verifica se ch2 é letra minúscula e atribui 'a' ou espaço
    ch3 = (ch2 >= 'a' && ch2 <= 'z') ? 'a' : ' ';

    // Imprime o valor de ch3
    cout << "Valor de ch3 para ch2: " << ch3 << endl;

    // Verifica se ch1 ou ch2 são dígitos e atribui '1' ou espaço
    ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

    // Imprime o valor de ch3
    cout << "Valor de ch3 para ch1 ou ch2: " << ch3 << endl;

    return 0;
}
