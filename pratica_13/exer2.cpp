#include <iostream>
#include <string>

using namespace std;

// Definição da estrutura empregado
struct empregado {
    string nome;
    string sobrenome;
    int anoNascimento;
    string RG;
    int anoAdmissao;
    double salario;
};

// Função para reajustar o salário de cada empregado em 10%
void Reajusta_dez_porcento(empregado vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i].salario *= 1.10; // Aumenta o salário em 10%
    }
}

int main() {
    // Criação do vetor de empregados
    empregado empregados[50];

    // Preenchimento dos dados para alguns empregados (você pode adicionar mais)
    empregados[0] = {"João", "Silva", 1985, "123456789", 2010, 3000.0};
    empregados[1] = {"Maria", "Santos", 1990, "987654321", 2015, 2500.0};
    empregados[2] = {"Pedro", "Ferreira", 1988, "567891234", 2008, 3500.0};

    // Calcula o tamanho real do vetor de empregados
    int tamanho = 3; // Neste exemplo, há 3 empregados, mas você pode ajustar conforme necessário

    // Chama a função para reajustar os salários em 10%
    Reajusta_dez_porcento(empregados, tamanho);

    // Exibe os dados atualizados dos empregados
    cout << "Dados dos empregados após o reajuste de 10%:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Nome: " << empregados[i].nome << " " << empregados[i].sobrenome << endl;
        cout << "Ano de Nascimento: " << empregados[i].anoNascimento << endl;
        cout << "RG: " << empregados[i].RG << endl;
        cout << "Ano de Admissão: " << empregados[i].anoAdmissao << endl;
        cout << "Salário: " << empregados[i].salario << endl;
        cout << endl;
    }

    return 0;
}
