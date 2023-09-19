#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main() {
    // a. Menor e Maior valor representável pelo tipo float
    float menorFloat = std::numeric_limits<float>::min();
    float maiorFloat = std::numeric_limits<float>::max();
    std::cout << "Menor valor representável por float: " << menorFloat << std::endl;
    std::cout << "Maior valor representável por float: " << maiorFloat << std::endl;

    // b. Variável pif com o valor de pi
    float pif = 3.14159265358979323846f;
    std::cout << "Valor de pif com casas decimais: " << std::fixed << pif << std::endl;

    // c. Formatar a saída com diferentes quantidades de casas decimais
    std::cout << "pif com 2 casas decimais: " << std::fixed << std::setprecision(2) << pif << std::endl;
    std::cout << "pif com 4 casas decimais: " << std::fixed << std::setprecision(4) << pif << std::endl;
    std::cout << "pif com 8 casas decimais: " << std::fixed << std::setprecision(8) << pif << std::endl;
    std::cout << "pif com 16 casas decimais: " << std::fixed << std::setprecision(16) << pif << std::endl;

    // d. Variável pid com o valor de pi
    double pid = 3.14159265358979323846;
    std::cout << "Valor de pid com casas decimais: " << std::fixed << pid << std::endl;

    // e. Diferença entre pif e pid com diferentes casas decimais
    std::cout << "Diferença entre pif e pid com 2 casas decimais: " << std::fixed << std::setprecision(2) << pif - pid << std::endl;
    std::cout << "Diferença entre pif e pid com 4 casas decimais: " << std::fixed << std::setprecision(4) << pif - pid << std::endl;
    std::cout << "Diferença entre pif e pid com 8 casas decimais: " << std::fixed << std::setprecision(8) << pif - pid << std::endl;
    std::cout << "Diferença entre pif e pid com 16 casas decimais: " << std::fixed << std::setprecision(16) << pif - pid << std::endl;

    // f. Verificando a diferença entre double e long double
    long double pi_long_double = 3.14159265358979323846l;
    std::cout << "Diferença entre pid (double) e pi_long_double (long double): " << std::fixed << pid - pi_long_double << std::endl;

    return 0;
}
