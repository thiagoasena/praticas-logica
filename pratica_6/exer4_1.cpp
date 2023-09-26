#include <iostream>
#include <cmath> // Para usar a constante M_PI

using namespace std;

int main() {
    double raio;
    
    // Solicita o raio do usuário
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    
    // Calcula o diâmetro
    double diametro = 2 * raio;
    
    // Calcula a circunferência (perímetro)
    double circunferencia = 2 * M_PI * raio;
    
    // Calcula a área
    double area = M_PI * pow(raio, 2);
    
    // Imprime os resultados
    cout << "Diâmetro do círculo: " << diametro << endl;
    cout << "Circunferência do círculo: " << circunferencia << endl;
    cout << "Área do círculo: " << area << endl;
    
    return 0;
}
