#include <iostream>

void calcularSomaESubtracao(int& X, int& Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    
    X = soma;
    Y = subtracao;
}

int main() {
    int X, Y;
    
    std::cout << "Digite o valor de X: ";
    std::cin >> X;
    
    std::cout << "Digite o valor de Y: ";
    std::cin >> Y;
    
    calcularSomaESubtracao(X, Y);
    
    std::cout << "O novo valor de X é: " << X << std::endl;
    std::cout << "O novo valor de Y é: " << Y << std::endl;
    
    return 0;
}
