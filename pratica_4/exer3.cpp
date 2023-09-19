#include <iostream>
#include <limits>

int main() {
    // a. Encontrando o menor e o maior valor de int
    int smallest_int = std::numeric_limits<int>::min();
    int largest_int = std::numeric_limits<int>::max();
    std::cout << "Menor valor de int: " << smallest_int << std::endl;
    std::cout << "Maior valor de int: " << largest_int << std::endl;

    // b. Criando e atribuindo o maior valor a uma variável uli
    unsigned long int uli = std::numeric_limits<unsigned long int>::max();
    std::cout << "Maior valor de unsigned long int: " << uli << std::endl;

    // c. Atribuindo uli a li e li de volta a uli
    long int li = uli;
    uli = li;
    std::cout << "Valor de li após atribuição: " << li << std::endl;
    std::cout << "Valor de uli após atribuição de li: " << uli << std::endl;
    // Comentário: Como li e uli são do mesmo tamanho, a atribuição funciona sem problemas.

    // d. Atribuindo o maior valor a li
    li = std::numeric_limits<long int>::max();
    std::cout << "Maior valor de long int: " << li << std::endl;

    // e. Atribuindo li a ui e li de volta a ui
    unsigned int ui = li;
    li = ui;
    std::cout << "Valor de ui após atribuição: " << ui << std::endl;
    std::cout << "Valor de li após atribuição de ui: " << li << std::endl;
    // Comentário: Aqui, ocorre um problema de conversão de tipo, pois li pode conter valores negativos que não podem ser representados em ui.

    // f. Atribuindo o maior valor a ui
    ui = std::numeric_limits<unsigned int>::max();
    std::cout << "Maior valor de unsigned int: " << ui << std::endl;

    return 0;
}
