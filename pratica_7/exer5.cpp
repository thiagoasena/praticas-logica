#include <iostream>
#include <cstdlib>  // Para a função rand()
#include <ctime>    // Para a função time()

using namespace std;

int main() {
    // Configurar a semente para geração de números aleatórios
    srand(time(0));

    // Gerar um número aleatório entre 1 e 100
    int numeroAleatorio = rand() % 100 + 1;
    int palpite;
    int tentativas = 0;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Tente adivinhar o número entre 1 e 100." << endl;

    do {
        cout << "Digite o seu palpite: ";
        cin >> palpite;
        tentativas++;

        if (palpite < numeroAleatorio) {
            cout << "Seu palpite está baixo. Tente novamente." << endl;
        } else if (palpite > numeroAleatorio) {
            cout << "Seu palpite está alto. Tente novamente." << endl;
        } else {
            cout << "Parabéns! Você acertou o número em " << tentativas << " tentativas." << endl;
        }

    } while (palpite != numeroAleatorio);

    return 0;
}
