#include <iostream>

// Função para ordenar quatro variáveis float em ordem crescente
void ordenar(float &a, float &b, float &c, float &d) {
    if (a > b) {
        std::swap(a, b);
    }
    if (b > c) {
        std::swap(b, c);
    }
    if (c > d) {
        std::swap(c, d);
    }
    if (a > b) {
        std::swap(a, b);
    }
}

int main() {
    float num1, num2, num3, num4;

    std::cout << "Digite quatro números float: ";
    std::cin >> num1 >> num2 >> num3 >> num4;

    // Chama a função para ordenar os números
    ordenar(num1, num2, num3, num4);

    std::cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}
