#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // Declare as variáveis
    double x, y, z;

    // Peça ao usuário para digitar dois números de ponto flutuante
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Calcule o valor da função f(x) = 5x + 2
    double fx = 5 * x + 2;

    // Verifique em que lado da curva f(x) = 5x + 2 o ponto (x, y) se encontra
    if (y > fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está acima da curva." << std::endl;
    } else if (y < fx) {
        std::cout << "O ponto (" << x << ", " << y << ") está abaixo da curva." << std::endl;
    } else {
        std::cout << "O ponto (" << x << ", " << y << ") está na curva." << std::endl;
    }

    // Calcule a distância euclidiana do ponto (x, y) ao centro de coordenadas
    double distancia = std::sqrt(x * x + y * y);
    std::cout << "A distância euclidiana do ponto (" << x << ", " << y << ") ao centro de coordenadas é: " << distancia << std::endl;

    // Calcule o produto entre x e y e imprima o resultado em notação científica
    z = x * y;
    std::cout << "O produto de x e y em notação científica é: " << std::scientific << z << std::endl;

    return 0;
}
