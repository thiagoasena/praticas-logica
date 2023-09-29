#include <iostream>

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para contar números primos no vetor
int conta_primos(int *vet, int qtde) {
    int count = 0;
    for (int i = 0; i < qtde; i++) {
        if (ehPrimo(vet[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int vetor[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    int quantidadePrimos = conta_primos(vetor, tamanho);

    std::cout << "Quantidade de números primos no vetor: " << quantidadePrimos << std::endl;

    return 0;
}
