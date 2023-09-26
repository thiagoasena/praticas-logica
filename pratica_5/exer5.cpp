#include <iostream>

int main() {
    unsigned char informacaoGenetica;
    
    // Passo (a): Ler a informação genética da planta como um unsigned char
    std::cout << "Digite a informacao genetica da planta (um valor entre 0 e 255): ";
    std::cin >> informacaoGenetica;
    
    // Passo (b): Contar quantos genes estão presentes usando operadores bit a bit
    int genesPresentes = 0;
    for (int i = 0; i < 8; i++) {
        if ((informacaoGenetica & (1 << i)) != 0) {
            genesPresentes++;
        }
    }
    
    std::cout << "Genes presentes na planta: " << genesPresentes << std::endl;
    
    // Passo (c): Solicitar ao usuário qual gene específico ele quer informações
    int geneDesejado;
    std::cout << "Digite o número do gene que deseja verificar (entre 1 e 8): ";
    std::cin >> geneDesejado;
    
    if (geneDesejado >= 1 && geneDesejado <= 8) {
        // Verificar se o gene desejado está presente na planta
        if ((informacaoGenetica & (1 << (geneDesejado - 1))) != 0) {
            std::cout << "O gene " << geneDesejado << " está presente na planta." << std::endl;
        } else {
            std::cout << "O gene " << geneDesejado << " não está presente na planta." << std::endl;
        }
    } else {
        std::cout << "Número de gene inválido. Deve ser um valor entre 1 e 8." << std::endl;
    }
    
    return 0;
}
