#include <iostream>
#include <string>

using namespace std;

string codificarString(const string& entrada) {
    string resultado = entrada; // Inicializa a string resultado com a entrada para preservar o tamanho
    for (char& letra : resultado) {
        if (isalpha(letra)) {
            if (letra == 'z' || letra == 'Z') {
                letra -= 25; // Trata o caso especial para 'z' e 'Z'
            } else {
                letra++;
            }
        }
    }
    return resultado;
}

string decodificarString(const string& entrada) {
    string resultado = entrada; // Inicializa a string resultado com a entrada para preservar o tamanho
    for (char& letra : resultado) {
        if (isalpha(letra)) {
            if (letra == 'a' || letra == 'A') {
                letra += 25; // Trata o caso especial para 'a' e 'A'
            } else {
                letra--;
            }
        }
    }
    return resultado;
}

int main() {
    string entrada;
    
    cout << "Digite uma string: ";
    getline(cin, entrada);

    string codigo = codificarString(entrada);
    string decodificado = decodificarString(codigo);

    cout << "String codificada: " << codigo << endl;
    cout << "String decodificada: " << decodificado << endl;

    return 0;
}
