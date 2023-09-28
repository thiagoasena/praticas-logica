#include <iostream>

int main() {
    std::cout << "Números primos de 1 a 100:" << std::endl;

    for (int i = 2; i <= 100; ++i) {
        bool isPrime = true;

        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
