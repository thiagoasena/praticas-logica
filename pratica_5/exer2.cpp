#include <iostream>

int main() {
    char ch1, ch2, ch3;
    
    // Pedir ao usuário para digitar um caractere e armazená-lo em ch1
    std::cout << "Digite um caractere: ";
    std::cin >> ch1;

    // Verificar o tipo de caractere em ch1
    std::string tipo;
    tipo = (ch1 >= 'A' && ch1 <= 'Z') ? "letra maiúscula" :
           (ch1 >= 'a' && ch1 <= 'z') ? "letra minúscula" :
           (ch1 >= '0' && ch1 <= '9') ? "dígito" : "outro tipo de caractere";

    // Atribuir o valor 81 a ch2
    ch2 = 81;

    // Imprimir ch2 em formatos numérico decimal, octal, hexadecimal e como caractere
    std::cout << "ch2 em formato decimal: " << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 em formato octal: " << std::oct << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 em formato hexadecimal: " << std::hex << static_cast<int>(ch2) << std::endl;
    std::cout << "ch2 como caractere: " << ch2 << std::endl;

    // Atribuir a letra minúscula correspondente a ch2 a ch3
    ch3 = static_cast<char>(ch2 + 32);

    // Imprimir ch3 em formatos numérico decimal, octal, hexadecimal e como caractere
    std::cout << "ch3 em formato decimal: " << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 em formato octal: " << std::oct << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 em formato hexadecimal: " << std::hex << static_cast<int>(ch3) << std::endl;
    std::cout << "ch3 como caractere: " << ch3 << std::endl;

    return 0;
}
