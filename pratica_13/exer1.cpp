#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

// Estrutura para armazenar informações de uma passagem
struct Passagem {
    int numeroAssento;
    string dataHora;
    string cpf;
    string nome;
    int idade;
    double valor;
};

// Função para calcular o total arrecadado para uma determinada viagem
double calcularTotalArrecadadoViagem(const vector<Passagem>& passagens) {
    double totalArrecadado = 0.0;
    for (const Passagem& passagem : passagens) {
        totalArrecadado += passagem.valor;
    }
    return totalArrecadado;
}

// Função para calcular o total arrecadado em um determinado mês
double calcularTotalArrecadadoMes(const vector<Passagem>& passagens, int mes) {
    double totalArrecadado = 0.0;
    for (const Passagem& passagem : passagens) {
        // Exemplo de formato de data/hora: "2023-09-28 14:30"
        int mesDaPassagem = stoi(passagem.dataHora.substr(5, 2));
        if (mesDaPassagem == mes) {
            totalArrecadado += passagem.valor;
        }
    }
    return totalArrecadado;
}

// Função para obter o nome do passageiro de uma determinada poltrona P de uma determinada viagem
string obterNomePassageiroPorPoltrona(const vector<Passagem>& passagens, int poltrona) {
    for (const Passagem& passagem : passagens) {
        if (passagem.numeroAssento == poltrona) {
            return passagem.nome;
        }
    }
    return "Poltrona vazia";
}

// Função para calcular o horário de viagem mais rentável
string calcularHorarioMaisRentavel(const vector<Passagem>& passagens) {
    map<string, double> horariosArrecadacao;

    for (const Passagem& passagem : passagens) {
        string horario = passagem.dataHora.substr(11, 5); // Extrai a hora e minuto do formato "2023-09-28 14:30"
        horariosArrecadacao[horario] += passagem.valor;
    }

    string horarioMaisRentavel;
    double maiorArrecadacao = 0.0;

    for (const auto& par : horariosArrecadacao) {
        if (par.second > maiorArrecadacao) {
            horarioMaisRentavel = par.first;
            maiorArrecadacao = par.second;
        }
    }

    return horarioMaisRentavel;
}

// Função para calcular a média de idade dos passageiros
double calcularMediaIdadePassageiros(const vector<Passagem>& passagens) {
    int totalPassageiros = passagens.size();
    int somaIdades = 0;

    for (const Passagem& passagem : passagens) {
        somaIdades += passagem.idade;
    }

    if (totalPassageiros > 0) {
        return static_cast<double>(somaIdades) / totalPassageiros;
    } else {
        return 0.0;
    }
}

int main() {
    vector<Passagem> passagens;
    
    // Exemplo de como adicionar uma passagem
    Passagem passagem1;
    passagem1.numeroAssento = 1;
    passagem1.dataHora = "2023-09-28 14:30";
    passagem1.cpf = "12345678900";
    passagem1.nome = "João";
    passagem1.idade = 30;
    passagem1.valor = 80.0;
    passagens.push_back(passagem1);

    // Exemplo de como calcular o total arrecadado para uma determinada viagem
    double totalViagem1 = calcularTotalArrecadadoViagem(passagens);
    cout << "Total arrecadado para a viagem 1: R$" << totalViagem1 << endl;

    // Exemplo de como calcular o total arrecadado em um determinado mês (setembro = 9)
    double totalSetembro = calcularTotalArrecadadoMes(passagens, 9);
    cout << "Total arrecadado em setembro: R$" << totalSetembro << endl;

    // Exemplo de como obter o nome do passageiro de uma determinada poltrona
    int poltrona = 1;
    string nomePassageiro = obterNomePassageiroPorPoltrona(passagens, poltrona);
    cout << "Nome do passageiro da poltrona " << poltrona << ": " << nomePassageiro << endl;

    // Exemplo de como calcular o horário de viagem mais rentável
    string horarioMaisRentavel = calcularHorarioMaisRentavel(passagens);
    cout << "Horário de viagem mais rentável: " << horarioMaisRentavel << endl;

    // Exemplo de como calcular a média de idade dos passageiros
    double mediaIdade = calcularMediaIdadePassageiros(passagens);
    cout << "Média de idade dos passageiros: " << mediaIdade << " anos" << endl;

    return 0;
}
