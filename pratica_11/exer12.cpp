#include <iostream>
#include <string>
#include <algorithm>

std::string caracteresComuns(const std::string& A, const std::string& B) {
    std::string C;
    
    for (char c : A) {
        if (B.find(c) != std::string::npos && C.find(c) == std::string::npos) {
            C += c;
        }
    }
    
    return C;
}

int main() {
    std::string A = "abcdef";
    std::string B = "cdefgh";
    
    std::string C = caracteresComuns(A, B);
    
    std::cout << "Caracteres comuns em A e B: " << C << std::endl;
    
    return 0;
}
