#include <iostream>

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    char charValue = 'A';
    bool boolValue;

    // Conversão de int para bool
    boolValue = intValue;  // intValue é diferente de 0, então boolValue será true
    std::cout << "int to bool: " << boolValue << std::endl;

    // Conversão de double para bool
    boolValue = doubleValue;  // doubleValue é diferente de 0.0, então boolValue será true
    std::cout << "double to bool: " << boolValue << std::endl;

    // Conversão de char para bool
    boolValue = charValue;  // charValue é diferente de '\0', então boolValue será true
    std::cout << "char to bool: " << boolValue << std::endl;

    // Conversão de bool para int
    int newIntValue = boolValue;  // boolValue é true, então newIntValue será 1
    std::cout << "bool to int: " << newIntValue << std::endl;

    return 0;
}
