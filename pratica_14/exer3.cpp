#include <iostream>
#include <cmath>

// Definição da struct Ponto
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    double dx = ponto1.x - ponto2.x;
    double dy = ponto1.y - ponto2.y;
    return std::sqrt(dx * dx + dy * dy);
}

int main() {
    Ponto pontoA, pontoB;

    // Solicita as coordenadas do ponto A ao usuário
    std::cout << "Digite as coordenadas do ponto A (x y): ";
    std::cin >> pontoA.x >> pontoA.y;

    // Solicita as coordenadas do ponto B ao usuário
    std::cout << "Digite as coordenadas do ponto B (x y): ";
    std::cin >> pontoB.x >> pontoB.y;

    // Calcula a distância entre os dois pontos
    double distancia = calcularDistancia(pontoA, pontoB);

    // Exibe a distância calculada
    std::cout << "A distância entre os pontos A e B é: " << distancia << std::endl;

    return 0;
}
