#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

int main(void)
{
    float num1, num2;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    cout << "Digite o segundo numero: ";
    cin >> num2;


    cout << setprecision(1) << fixed;
    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtracao: " << num1 - num2 << endl;
    cout << "Multiplicacao: " << num1 * num2 << endl;
    cout << "Divisao: " << num1 / num2 << endl;
   
    return 0;
}