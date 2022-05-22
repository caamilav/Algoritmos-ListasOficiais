//Elabore um algoritmo que leia o nome, o pre�o unit�rio e a quantidade vendida de v�rios
//produtos, que ser�o informados pelo usu�rio.Obs.: como a quantidade de produtos �
//indeterminada, para que o processo de leitura dos dados termine, o usu�rio deve digitar
//�fim� quando for ler a vari�vel que armazena o nome do produto.
//Ao final, o algoritmo dever� apresentar :
//a) O nome e o valor do produto mais barato;
//b) O nome e a quantidade do produto mais vendido;
//c) A m�dia de pre�o dos produtos.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nomeProduto, nomeProdutoMaisBarato, nomeProdutoMaisVendido;
    float precoProduto, precoProdutoMaisBarato, media, somador = 0;
    int qtdVendida, qtdProdutoMaisVendido;
    int contador = 0;
    while (nomeProduto != "fim") {
        cout << "Informe o nome do produto: ";
        cin >> nomeProduto;
        if (nomeProduto != "fim") {
            cout << "Informe o pre�o: ";
            cin >> precoProduto;
            somador += precoProduto;

            cout << "Informe a quantidade vendida: ";
            cin >> qtdVendida;

            if (contador == 0) {
                nomeProdutoMaisBarato = nomeProduto;
                precoProdutoMaisBarato = precoProduto;
                nomeProdutoMaisVendido = nomeProduto;
                qtdProdutoMaisVendido = qtdVendida;
            }

            if (precoProduto < precoProdutoMaisBarato) {
                nomeProdutoMaisBarato = nomeProduto;
                precoProdutoMaisBarato = precoProduto;
            }

            if (qtdVendida > qtdProdutoMaisVendido) {
                nomeProdutoMaisVendido = nomeProduto;
                qtdProdutoMaisVendido = qtdVendida;
            }

            contador++;

        }
    }
    media = somador / contador;
    cout << "\nO produto mais barato � o " << nomeProdutoMaisBarato << " com o pre�o de R$" << precoProdutoMaisBarato;
    cout << "\nO produto mais vendido � o " << nomeProdutoMaisVendido << " com " << qtdProdutoMaisVendido << " vendas";
    cout << "\nA m�dia de pre�os dos produtos � " << media;
}