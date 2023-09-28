#include <iostream>

using namespace std;

int main() {
    int altura;
    cout << "Digite a altura do padrão: ";
    cin >> altura;

    // Padrão 1
    cout << "Padrão 1:" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Padrão 2
    cout << "Padrão 2:" << endl;
    for (int i = altura; i >= 1; i--) {
        for (int j = 1; j <= altura - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Padrão 3
    cout << "Padrão 3:" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= altura - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Padrão 4
    cout << "Padrão 4:" << endl;
    for (int i = altura; i >= 1; i--) {
        for (int j = 1; j <= altura - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
