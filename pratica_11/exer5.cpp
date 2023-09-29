#include <iostream>

int insere_meio(int vetor[], int &qtde, int elemento) {
    // Verifica se o vetor está cheio
    if (qtde >= sizeof(vetor) / sizeof(vetor[0])) {
        return -1; // Vetor cheio, não é possível inserir mais elementos
    }

    // Calcula a posição do meio do vetor
    int meio = qtde / 2;

    // Desloca os elementos à direita para abrir espaço para o novo elemento
    for (int i = qtde; i > meio; i--) {
        vetor[i] = vetor[i - 1];
    }

    // Insere o elemento no meio
    vetor[meio] = elemento;

    // Incrementa a quantidade de elementos no vetor
    qtde++;

    return qtde;
}

int main() {
    int vetor[100] = {1, 2, 3, 4, 5, 6};
    int qtde = 6;

    int elemento = 100;
    int resultado = insere_meio(vetor, qtde, elemento);

    if (resultado != -1) {
        std::cout << "Novo valor de qtde: " << resultado << std::endl;
        std::cout << "Vetor após a inserção:";
        for (int i = 0; i < qtde; i++) {
            std::cout << " " << vetor[i];
        }
        std::cout << std::endl;
    } else {
        std::cout << "Não foi possível inserir o elemento. O vetor está cheio." << std::endl;
    }

    return 0;
}
