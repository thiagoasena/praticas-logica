#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Estrutura para representar um produto
struct Produto {
    string codigo;
    string nome;
    double preco;
};

// Protótipos das funções
void inserirProduto(Produto produtos[], int& numProdutos);
void excluirProduto(Produto produtos[], int& numProdutos);
void listarProdutos(const Produto produtos[], int numProdutos);
void consultarPreco(const Produto produtos[], int numProdutos);

int main() {
    const int MAX_PRODUTOS = 300;
    Produto produtos[MAX_PRODUTOS];
    int numProdutos = 0;

    int escolha;

    do {
        cout << "Menu:\n";
        cout << "1. Inserir um novo produto\n";
        cout << "2. Excluir um produto cadastrado\n";
        cout << "3. Listar todos os produtos\n";
        cout << "4. Consultar o preço de um produto\n";
        cout << "5. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
            case 1:
                inserirProduto(produtos, numProdutos);
                break;
            case 2:
                excluirProduto(produtos, numProdutos);
                break;
            case 3:
                listarProdutos(produtos, numProdutos);
                break;
            case 4:
                consultarPreco(produtos, numProdutos);
                break;
            case 5:
                cout << "Saindo do programa.\n";
                break;
            default:
                cout << "Opção inválida. Tente novamente.\n";
        }
    } while (escolha != 5);

    return 0;
}

void inserirProduto(Produto produtos[], int& numProdutos) {
    if (numProdutos >= 300) {
        cout << "Limite máximo de produtos alcançado.\n";
        return;
    }

    Produto novoProduto;
    cout << "Digite o código do produto (13 caracteres numéricos): ";
    cin >> novoProduto.codigo;

    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == novoProduto.codigo) {
            cout << "Já existe um produto com esse código.\n";
            return;
        }
    }

    cout << "Digite o nome do produto (até 20 caracteres): ";
    cin.ignore();
    getline(cin, novoProduto.nome);

    cout << "Digite o preço do produto (duas casas decimais): ";
    cin >> novoProduto.preco;

    produtos[numProdutos] = novoProduto;
    numProdutos++;
    cout << "Produto cadastrado com sucesso.\n";
}

void excluirProduto(Produto produtos[], int& numProdutos) {
    string codigo;
    cout << "Digite o código do produto a ser excluído: ";
    cin >> codigo;

    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            for (int j = i; j < numProdutos - 1; j++) {
                produtos[j] = produtos[j + 1];
            }
            numProdutos--;
            cout << "Produto excluído com sucesso.\n";
            return;
        }
    }

    cout << "Produto não encontrado.\n";
}

void listarProdutos(const Produto produtos[], int numProdutos) {
    if (numProdutos == 0) {
        cout << "Nenhum produto cadastrado.\n";
        return;
    }

    cout << "Lista de produtos:\n";
    cout << left << setw(15) << "Código" << setw(25) << "Nome" << setw(10) << "Preço" << endl;
    for (int i = 0; i < numProdutos; i++) {
        cout << setw(15) << produtos[i].codigo << setw(25) << produtos[i].nome << fixed << setprecision(2) << setw(10) << produtos[i].preco << endl;
    }
}

void consultarPreco(const Produto produtos[], int numProdutos) {
    string codigo;
    cout << "Digite o código do produto para consultar o preço: ";
    cin >> codigo;

    for (int i = 0; i < numProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            cout << "Preço do produto: R$" << fixed << setprecision(2) << produtos[i].preco << endl;
            return;
        }
    }

    cout << "Produto não encontrado.\n";
}
