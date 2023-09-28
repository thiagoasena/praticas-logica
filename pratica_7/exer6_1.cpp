#include <iostream>

int main() {
    int altura;
    
    // Solicitar ao usuário a altura do padrão
    std::cout << "Digite a altura do padrão: ";
    std::cin >> altura;
    
    char caractere = 'A'; // Inicializar o caractere com 'A'

    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            // Imprimir o caractere atual e incrementá-lo
            std::cout << caractere;
            caractere++;
        }
        std::cout << std::endl; // Mudar de linha após cada linha do padrão
    }
    
    return 0;
}
