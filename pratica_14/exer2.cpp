#include <iostream>

// Função para converter de Celsius para Fahrenheit
double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32.0;
}

// Função para entrada de temperatura em Celsius e exibição do resultado em Fahrenheit
void converterTemperatura() {
    double celsius, fahrenheit;

    std::cout << "Digite a temperatura em graus Celsius: ";
    std::cin >> celsius;

    // Chamando a função de conversão
    fahrenheit = celsiusParaFahrenheit(celsius);

    std::cout << "A temperatura em graus Fahrenheit é: " << fahrenheit << std::endl;
}

int main() {
    // Teste a função de conversão com diferentes valores
    converterTemperatura();

    return 0;
}
