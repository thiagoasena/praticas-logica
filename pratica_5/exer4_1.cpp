#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    
    // Leitura dos coeficientes a, b e c
    std::cout << "Digite o coeficiente a: ";
    std::cin >> a;
    
    std::cout << "Digite o coeficiente b: ";
    std::cin >> b;
    
    std::cout << "Digite o coeficiente c: ";
    std::cin >> c;
    
    // Cálculo do discriminante (delta)
    double delta = b * b - 4 * a * c;
    
    std::cout << "Polinômio: " << a << "x^2 + " << b << "x + " << c << std::endl;
    
    if (delta > 0) {
        // Duas raízes reais distintas
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "O polinômio tem duas raízes reais: x1 = " << x1 << " e x2 = " << x2 << std::endl;
    } else if (delta == 0) {
        // Uma raiz real
        double x1 = -b / (2 * a);
        std::cout << "O polinômio tem uma raiz real: x1 = " << x1 << std::endl;
    } else {
        // Nenhuma raiz real
        std::cout << "O polinômio não tem raízes reais." << std::endl;
    }
    
    // Leitura do valor de x
    double x;
    std::cout << "Digite o valor de x: ";
    std::cin >> x;
    
    // Cálculo de p(x)
    double px = a * x * x + b * x + c;
    
    std::cout << "p(" << x << ") = " << px << std::endl;
    
    return 0;
}
