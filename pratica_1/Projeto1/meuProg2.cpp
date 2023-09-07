#include <iostream>
#include <locale.h>

using namespace std;

int main(void)
{
    int num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;

    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtracao: " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;
    cout << "Divisao: " << num1 / num2 << endl;
    cout << "Resto: " << num1 % num2 << endl;

    return 0;
}