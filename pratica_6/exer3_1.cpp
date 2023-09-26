#include <iostream>

int main() {
    int numero1, numero2;
    
    // Pedir ao usuário para fornecer dois números inteiros
    std::cout << "Digite o primeiro número inteiro: ";
    std::cin >> numero1;
    
    std::cout << "Digite o segundo número inteiro: ";
    std::cin >> numero2;
    
    // Verificar e imprimir o maior número
    std::cout << (numero1 > numero2 ? numero1 : numero2) << " e maior" << std::endl;
    
    // Verificar se os números são iguais e imprimir a mensagem correspondente
    (numero1 == numero2) ? std::cout << "Estes números são iguais" : std::cout << "";
    
    // Identificar se o maior valor é par ou ímpar
    int maior = (numero1 > numero2) ? numero1 : numero2;
    std::cout << "O maior número é ";
    
    if (maior % 2 == 0) {
        std::cout << "par." << std::endl;
    } else {
        std::cout << "ímpar." << std::endl;
    }
    
    return 0;
}
