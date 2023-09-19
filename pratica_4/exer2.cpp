#include <iostream>
#include <iomanip> // Para formatação hexadecimal e octal

using namespace std;

int main() {
    // Parte a: Imprimir caracteres numéricos e seus códigos numéricos
    cout << "Parte a:" << endl;
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c) << endl;
    }

    // Parte b: Imprimir código numérico em octal e hexadecimal
    cout << "\nParte b:" << endl;
    for (char c = '0'; c <= '9'; ++c) {
        cout << "'" << c << "' - " << static_cast<int>(c) << " (Octal: " << oct << static_cast<int>(c) << ", Hexadecimal: " << hex << static_cast<int>(c) << dec << ")" << endl;
    }

    // Parte c: Ler um caractere e imprimir informações
    cout << "\nParte c: Digite um caractere: ";
    char inputChar;
    cin >> inputChar;
    cout << "'" << inputChar << "' - " << static_cast<int>(inputChar) << " (Octal: " << oct << static_cast<int>(inputChar) << ", Hexadecimal: " << hex << static_cast<int>(inputChar) << dec << ")" << endl;

    // Parte d: Exemplo com caracteres especiais 'ç' e 'ã'
    char cedilha = 'ç';
    char til = 'ã';
    cout << "\nParte d:" << endl;
    cout << "'" << cedilha << "' - " << static_cast<int>(cedilha) << " (Octal: " << oct << static_cast<int>(cedilha) << ", Hexadecimal: " << hex << static_cast<int>(cedilha) << dec << ")" << endl;
    cout << "'" << til << "' - " << static_cast<int>(til) << " (Octal: " << oct << static_cast<int>(til) << ", Hexadecimal: " << hex << static_cast<int>(til) << dec << ")" << endl;

    return 0;
}
