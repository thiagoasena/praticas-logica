#include <iostream>

int main() {
    double x, y, z;

    // Pedir ao usuário para digitar dois números de ponto flutuante
    std::cout << "Digite o valor de x: ";
    std::cin >> x;

    std::cout << "Digite o valor de y: ";
    std::cin >> y;

    // Soma de x e y
    z = x + y;
    std::cout << "Soma de x e y: " << z << std::endl;

    // Média de x e y
    z = (x + y) / 2;
    std::cout << "Média de x e y: " << z << std::endl;

    // Produto de x e y
    z = x * y;
    std::cout << "Produto de x e y: " << z << std::endl;

    // Maior valor entre x e y
    z = (x > y) ? x : y;
    std::cout << "Maior valor entre x e y: " << z << std::endl;

    // Menor valor entre x e y
    z = (x < y) ? x : y;
    std::cout << "Menor valor entre x e y: " << z << std::endl;

    return 0;
}