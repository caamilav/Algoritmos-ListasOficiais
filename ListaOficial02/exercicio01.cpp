#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "Exercício 01 - Hotel Alladinn\n\n";

    string nomeCliente;
    float valorDiaria = 60.00, taxaServicos, totalDiaria, total;
    int quantidadeDias;

    cout << "Cliente: ";
    cin >> nomeCliente;
    cout << "Dias de hospedagem: ";
    cin >> quantidadeDias;

    if (quantidadeDias <= 0) {
        cout << "A quantidade de dias de hospedagem deve ser maior que zero";
    }
    else {

        if (quantidadeDias > 5) {
            taxaServicos = 5.50 * quantidadeDias;
        }
        else if (quantidadeDias == 5) {
            taxaServicos = 7.00 * quantidadeDias;
        }
        else if (quantidadeDias < 5) {
            taxaServicos = 9.00 * quantidadeDias;
        }

        totalDiaria = valorDiaria * quantidadeDias;
        total = totalDiaria + taxaServicos;

        cout << "\n### Hotel Alladinn ";
        cout << "\nCliente: " << nomeCliente;
        cout << "\nDias de Hospedagem:......" << quantidadeDias;
        cout << "\nValor de Diárias:......R$" << totalDiaria;
        cout << "\nTaxa de Serviços:......R$" << taxaServicos;
        cout << "\nTOTAL:.................R$" << total;
    }

}
