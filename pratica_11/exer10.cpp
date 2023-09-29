#include <iostream>
#include <vector>

// Função que recebe uma string e uma letra e retorna um vetor com as posições onde a letra foi encontrada
// e o tamanho do vetor criado
std::vector<int>* encontrarPosicoes(const std::string& texto, char letra) {
    std::vector<int>* posicoes = new std::vector<int>(); // Cria um vetor dinâmico para armazenar as posições
    int tamanho = texto.length(); // Tamanho da string

    // Itera pela string para encontrar as posições da letra
    for (int i = 0; i < tamanho; i++) {
        if (texto[i] == letra) {
            posicoes->push_back(i); // Adiciona a posição no vetor
        }
    }

    return posicoes; // Retorna o vetor de posições
}

int main() {
    std::string texto;
    char letra;

    // Solicita ao usuário a entrada da string e da letra
    std::cout << "Digite uma string: ";
    std::cin >> texto;
    std::cout << "Digite uma letra: ";
    std::cin >> letra;

    // Chama a função para encontrar as posições da letra na string
    std::vector<int>* posicoes = encontrarPosicoes(texto, letra);

    // Imprime as posições encontradas
    int tamanho = posicoes->size();
    if (tamanho > 0) {
        std::cout << "A letra '" << letra << "' foi encontrada nas posições: ";
        for (int i = 0; i < tamanho; i++) {
            std::cout << (*posicoes)[i];
            if (i < tamanho - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "A letra '" << letra << "' não foi encontrada na string." << std::endl;
    }

    // Libera a memória alocada para o vetor de posições
    delete posicoes;

    return 0;
}
