#include <iostream>

int main() {
    int numero, somaDivisores = 0;

    // Solicita ao usuário que insira um número inteiro positivo
    std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    // Verifica se o número é positivo
    if (numero <= 0) {
        std::cout << "O número deve ser positivo." << std::endl;
        return 1; // Encerra o programa com código de erro
    }

    // Encontra os divisores do número e calcula a soma
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == numero) {
        std::cout << numero << " é um número perfeito." << std::endl;
    } else {
        std::cout << numero << " não é um número perfeito." << std::endl;
    }

    return 0;
}
