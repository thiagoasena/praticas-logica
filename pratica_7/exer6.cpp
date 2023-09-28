#include <iostream>
#include <iomanip> // Para formatar a saída

using namespace std;

int main() {
    char continuar;

    do {
        // Variáveis para armazenar os dados do aluno
        int matricula;
        double nota1, nota2, nota3;

        // Solicita a matrícula e as notas do aluno
        cout << "Digite a matrícula do aluno (apenas números): ";
        cin >> matricula;
        cout << "Digite as três notas do aluno: ";
        cin >> nota1 >> nota2 >> nota3;

        // Calcula a média do aluno
        double media = (nota1 + nota2 + nota3) / 3.0;

        // Imprime os dados formatados
        cout << "MATRICULA NOTA1 NOTA2 NOTA3 MEDIA" << endl;
        cout << "===================================" << endl;
        cout << setw(9) << matricula << " " << setw(5) << nota1 << " " << setw(5) << nota2 << " " << setw(5) << nota3 << " " << setw(5) << media << endl;

        // Pergunta se deseja continuar cadastrando alunos
        cout << "Deseja cadastrar outro aluno? (S para sim, qualquer outra tecla para sair): ";
        cin >> continuar;

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
