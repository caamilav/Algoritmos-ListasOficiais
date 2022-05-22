//Elabore um algoritmo que leia o nome, o preço unitário e a quantidade vendida de vários
//produtos, que serão informados pelo usuário.Obs.: como a quantidade de produtos é
//indeterminada, para que o processo de leitura dos dados termine, o usuário deve digitar
//“fim” quando for ler a variável que armazena o nome do produto.
//Ao final, o algoritmo deverá apresentar :
//a) O nome e o valor do produto mais barato;
//b) O nome e a quantidade do produto mais vendido;
//c) A média de preço dos produtos.
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
            cout << "Informe o preço: ";
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
    cout << "\nO produto mais barato é o " << nomeProdutoMaisBarato << " com o preço de R$" << precoProdutoMaisBarato;
    cout << "\nO produto mais vendido é o " << nomeProdutoMaisVendido << " com " << qtdProdutoMaisVendido << " vendas";
    cout << "\nA média de preços dos produtos é " << media;
}