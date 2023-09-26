#include <iostream>

int main() {
    double x, y;

    // Solicita a entrada das coordenadas x e y
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Use o operador condicional para determinar o quadrante
    std::string quadrante = (x > 0 && y > 0) ? "primeiro quadrante"
                          : (x < 0 && y > 0) ? "segundo quadrante"
                          : (x < 0 && y < 0) ? "terceiro quadrante"
                          : (x > 0 && y < 0) ? "quarto quadrante"
                          : (x == 0 || y == 0) ? "sobre um dos eixos"
                          : "ponto de origem";

    // Exibe o resultado
    std::cout << "O ponto (" << x << ", " << y << ") está no " << quadrante << "." << std::endl;

    return 0;
}
