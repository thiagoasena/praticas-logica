#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura Empregado
struct Empregado {
    string nome;
    string sobrenome;
    int anoNascimento;
    string RG;
    int anoAdmissao;
    double salario;
};

// Função para reajustar o salário em 10%
void Reajusta_dez_porcento(Empregado empregados[], int numEmpregados) {
    for (int i = 0; i < numEmpregados; i++) {
        empregados[i].salario *= 1.10; // Aumento de 10%
    }
}

int main() {
    // Definindo um vetor de empregados para armazenar até 50 empregados
    Empregado empregados[50];
    int numEmpregados;

    cout << "Quantos empregados deseja cadastrar? (até 50): ";
    cin >> numEmpregados;

    if (numEmpregados <= 0 || numEmpregados > 50) {
        cout << "Número inválido de empregados. O programa será encerrado." << endl;
        return 1;
    }

    // Entrada de dados
    for (int i = 0; i < numEmpregados; i++) {
        cout << "Empregado " << i + 1 << ":" << endl;
        cout << "Nome: ";
        cin >> empregados[i].nome;
        cout << "Sobrenome: ";
        cin >> empregados[i].sobrenome;
        cout << "Ano de Nascimento: ";
        cin >> empregados[i].anoNascimento;
        cout << "RG: ";
        cin >> empregados[i].RG;
        cout << "Ano de Admissão: ";
        cin >> empregados[i].anoAdmissao;
        cout << "Salário: ";
        cin >> empregados[i].salario;
    }

    // Chamando a função para reajustar salários em 10%
    Reajusta_dez_porcento(empregados, numEmpregados);

    // Saída de dados
    cout << "\nDados dos empregados após o reajuste de 10%:\n";
    for (int i = 0; i < numEmpregados; i++) {
        cout << "Empregado " << i + 1 << ":" << endl;
        cout << "Nome: " << empregados[i].nome << " " << empregados[i].sobrenome << endl;
        cout << "Ano de Nascimento: " << empregados[i].anoNascimento << endl;
        cout << "RG: " << empregados[i].RG << endl;
        cout << "Ano de Admissão: " << empregados[i].anoAdmissao << endl;
        cout << "Salário: " << empregados[i].salario << endl;
    }

    return 0;
}
