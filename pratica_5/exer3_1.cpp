#include <iostream>
#include <climits>

int main() {
    int numero;
    std::cout << "Digite um número inteiro: ";
    std::cin >> numero;

    std::string resultado = (numero >= SHRT_MIN && numero <= SHRT_MAX) ? "este valor pertence ao intervalo dos short int" : "e maior que um short int";

    std::cout << numero << " " << resultado << std::endl;

    return 0;
}
