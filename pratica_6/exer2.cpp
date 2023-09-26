#include <iostream>

int main() {
    // Declaração das variáveis
    int a, b, c;

    // Solicita ao usuário para digitar dois números inteiros
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Calcula e imprime o valor de c usando a primeira expressão
    c = 4 * a + b / 3 - 5;
    std::cout << "Resultado da primeira expressão: " << c << std::endl;

    // Calcula e imprime o valor de c usando a segunda expressão
    c = 4 * (a + b) / (3 - 5);
    std::cout << "Resultado da segunda expressão: " << c << std::endl;

    /*
    As expressões são diferentes devido à precedência dos operadores.
    Na primeira expressão, as operações são realizadas na seguinte ordem:
    1. Multiplicação: 4 * a
    2. Divisão: b / 3
    3. Subtração: resultado da etapa 1 - resultado da etapa 2
    4. Subtração: resultado da etapa 3 - 5

    Na segunda expressão, as operações são realizadas na seguinte ordem:
    1. Adição: a + b
    2. Multiplicação: 4 * (resultado da etapa 1)
    3. Divisão: resultado da etapa 2 / (3 - 5)

    Portanto, a ordem das operações afeta o resultado final.

    Para demonstrar uma variação, podemos usar a expressão: c = (a * b) + (a - b) / 2 + 7;
    */
    c = (a * b) + (a - b) / 2 + 7;
    std::cout << "Resultado da terceira expressão: " << c << std::endl;

    // Recalcula o valor de c usando a expressão 'a'
    c = a;
    std::cout << "Resultado da expressão 'c = a': " << c << std::endl;

    return 0;
}
