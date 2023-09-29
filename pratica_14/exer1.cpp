#include <iostream>

// Função para calcular o fatorial de um número
unsigned long long calcularFatorial(int numero) {
    if (numero <= 0) {
        return 1;
    } else {
        unsigned long long fatorial = 1;
        for (int i = 1; i <= numero; i++) {
            fatorial *= i;
        }
        return fatorial;
    }
}

int main() {
    int numero1, numero2, numero3;

    // Solicita ao usuário três números diferentes
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> numero2;

    std::cout << "Digite o terceiro número inteiro: ";
    std::cin >> numero3;

    // Calcula e exibe os fatoriais dos números digitados
    unsigned long long fatorial1 = calcularFatorial(numero1);
    unsigned long long fatorial2 = calcularFatorial(numero2);
    unsigned long long fatorial3 = calcularFatorial(numero3);

    std::cout << "O fatorial de " << numero1 << " é " << fatorial1 << std::endl;
    std::cout << "O fatorial de " << numero2 << " é " << fatorial2 << std::endl;
    std::cout << "O fatorial de " << numero3 << " é " << fatorial3 << std::endl;

    return 0;
}
