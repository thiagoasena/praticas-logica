#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

struct Passagem {
    int numeroAssento;
    string dataHora;
    string CPF;
    string nome;
    int idade;
    double preco;
};

struct Viagem {
    string horario;
    vector<Passagem> passagens;
};

// Função para calcular o total arrecadado para uma determinada viagem
double calcularTotalArrecadado(const Viagem& viagem) {
    double total = 0;
    for (const Passagem& passagem : viagem.passagens) {
        total += passagem.preco;
    }
    return total;
}

// Função para calcular o total arrecadado em um determinado mês
double calcularTotalArrecadadoNoMes(const vector<Viagem>& viagens, const string& mes) {
    double total = 0;
    for (const Viagem& viagem : viagens) {
        if (viagem.horario.substr(5, 2) == mes) {
            total += calcularTotalArrecadado(viagem);
        }
    }
    return total;
}

// Função para encontrar o horário de viagem mais rentável
string encontrarHorarioMaisRentavel(const vector<Viagem>& viagens) {
    map<string, double> horarios; // Mapa para armazenar horários e seus totais arrecadados
    for (const Viagem& viagem : viagens) {
        double total = calcularTotalArrecadado(viagem);
        horarios[viagem.horario] += total;
    }

    string horarioMaisRentavel;
    double maxTotal = 0;
    for (const auto& par : horarios) {
        if (par.second > maxTotal) {
            maxTotal = par.second;
            horarioMaisRentavel = par.first;
        }
    }
    return horarioMaisRentavel;
}

// Função para calcular a média de idade dos passageiros
double calcularMediaIdade(const vector<Viagem>& viagens) {
    int totalIdade = 0;
    int totalPassageiros = 0;
    for (const Viagem& viagem : viagens) {
        for (const Passagem& passagem : viagem.passagens) {
            totalIdade += passagem.idade;
            totalPassageiros++;
        }
    }
    if (totalPassageiros > 0) {
        return static_cast<double>(totalIdade) / totalPassageiros;
    } else {
        return 0;
    }
}

// Função para localizar o passageiro pela poltrona e hora da viagem
string localizarPassageiro(const vector<Viagem>& viagens, int numeroAssento, const string& horaViagem) {
    for (const Viagem& viagem : viagens) {
        if (viagem.horario == horaViagem) {
            for (const Passagem& passagem : viagem.passagens) {
                if (passagem.numeroAssento == numeroAssento) {
                    return passagem.nome;
                }
            }
        }
    }
    return "Passageiro não encontrado";
}

int main() {
    vector<Viagem> viagens;

    // Exemplo de entrada de dados (pode ser adaptado para um loop)
    Viagem viagem1;
    viagem1.horario = "2023-09-28 10:00";
    for (int i = 1; i <= 40; i++) {
        Passagem passagem;
        passagem.numeroAssento = i;
        passagem.dataHora = "2023-09-28 10:00";
        passagem.CPF = "123.456.789-00";
        passagem.nome = "Passageiro " + to_string(i);
        passagem.idade = 25 + i;
        passagem.preco = 80.0;
        viagem1.passagens.push_back(passagem);
    }
    viagens.push_back(viagem1);

    // Exemplo de consulta de informações
    cout << "Total arrecadado para a viagem: " << calcularTotalArrecadado(viagem1) << " reais" << endl;
    cout << "Total arrecadado em setembro: " << calcularTotalArrecadadoNoMes(viagens, "09") << " reais" << endl;
    cout << "Horário de viagem mais rentável: " << encontrarHorarioMaisRentavel(viagens) << endl;
    cout << "Média de idade dos passageiros: " << calcularMediaIdade(viagens) << " anos" << endl;

    // Exemplo de localização de passageiro por poltrona
    int poltrona = 15;
    string horaViagem = "2023-09-28 10:00";
    cout << "Passageiro na poltrona " << poltrona << ": " << localizarPassageiro(viagens, poltrona, horaViagem) << endl;

    return 0;
}
