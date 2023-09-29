#include <iostream>

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    if (n <= 0) {
        std::cerr << "O vetor está vazio!" << std::endl;
        return;
    }

    maximo = vetor[0];
    minimo = vetor[0];

    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        } else if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> n;

    int vetor[n];
    std::cout << "Digite os elementos do vetor:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    int maximo, minimo;
    maxmin(vetor, n, maximo, minimo);

    std::cout << "O elemento de maior valor é: " << maximo << std::endl;
    std::cout << "O elemento de menor valor é: " << minimo << std::endl;

    return 0;
}
