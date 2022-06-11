#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "Exercício 03" << endl;

    string nomes[100];
    int anos[100];
    float valores[100];
    int tipos[100];

    string nome;
    int posicao = 0;
    int anoAtual = 2022;
    float mediaValorLivro, mediaIdadeLivro, mediaIdadeRevista;
    float somadorIdadeLivro = 0, somadorIdadeRevista = 0, somadorValorLivro = 0;
    int contadorLivro = 0, contadorRevista = 0;
    int posicaoItemMaisCaro = 0, posicaoItemMaisBarato = 0, posicaoItemMaisRecente = 0;
    bool existeItemRequisitado = false;
    //aux
    string tipoItemMaisCaro = tipos[posicaoItemMaisCaro] == 1 ? "Livro" : "Revista";
    string tipoItemMaisBarato = tipos[posicaoItemMaisBarato] == 1 ? "Livro" : "Revista";
    string tipoItemMaisRecente = tipos[posicaoItemMaisRecente] == 1 ? "Livro" : "Revista";


    while (nome != "fim") {
        cout << "\nInforme o nome: ";

        while (getline(cin, nome))
            if (nome != "") {
                break;
            } 


        if (nome != "fim") {
            nomes[posicao] = nome;

            cout << "Ano de publicação: ";
            cin >> anos[posicao];

            cout << "Valor: R$ ";
            cin >> valores[posicao];

            //to do:validar
            cout << "Tipo do documento 1 - livro ou 2 - revista: ";
            cin >> tipos[posicao];

            cout << "\nItem registrado com sucesso!" << endl;

            posicao++;
        }
    }


    //atribui valor aos contadores de revistas e livros
    for (int q = 0; q < posicao; q++) {
        if (tipos[q] == 1) {
            contadorLivro++;
        } else if (tipos[q] == 2) {
            contadorRevista++;
        }
    }

    //a) Calcule e informe a média de valores (preços) de todos os livros;
    for (int i = 0; i < posicao; i++) {
        if (tipos[i] == 1) {
            somadorValorLivro += valores[i];
        }
    }
    mediaValorLivro = somadorValorLivro / contadorLivro;

    //b) Verifique se há algum livro ou revista chamada “Algoritmos para Experts” no acervo, e caso positivo mande uma mensagem ao usuário confirmando a presença deste;
    for (int j = 0; j < posicao; j++) {
        if (nomes[j] == "Algoritmos para Experts") {
            existeItemRequisitado = true;
        }
    }

    //c) Calcule a média de idade dos livros e das revistas, e informe qual tipo de documento
    //possui a maior média de idade;
    for (int k = 0; k < posicao;k++) {
        if (tipos[k] == 1) {
            somadorIdadeLivro += (anoAtual - anos[k]);
        }
        else if (tipos[k] == 2) {
            somadorIdadeRevista += (anoAtual - anos[k]);
        }
    }
    mediaIdadeLivro = somadorIdadeLivro / contadorLivro;
    mediaIdadeRevista = somadorIdadeRevista / contadorRevista;

    //d) Verifique e apresente todos os dados do item mais caro e do item mais barato;
    for (int w = 0; w < posicao; w++) {
        if (valores[w] > valores[posicaoItemMaisCaro]) {
            posicaoItemMaisCaro = w;
        }
        if (valores[w] < valores[posicaoItemMaisBarato]) {
            posicaoItemMaisBarato = w;
        }
    }

    //e) Informe o nome e o valor do item mais recente de todo o acervo, e se este é livro ou
    //revista.
    for (int y = 0; y < posicao; y++) {
        if (anos[y] > anos[posicaoItemMaisRecente]) {
            posicaoItemMaisRecente = y;
        }
    }



    //saida
    cout << "\n-----Informações----\n";

    cout << "\nMédia de valores dos livros: " << mediaValorLivro << endl;

    if(existeItemRequisitado)
    cout << "\nO item Algoritmos para Experts está presente no acervo" << endl;

    cout << "\nMédia de Idade dos itens do acervo: " << endl;
    cout << "\tLivros: " << mediaIdadeLivro << " anos" << endl;
    cout << "\tRevistas: " << mediaIdadeRevista << " anos" << endl;

    cout << "\nDados do item mais caro: " << endl;
    cout << "\tNome: " << nomes[posicaoItemMaisCaro] << endl;
    cout << "\tAno da publicação: " << anos[posicaoItemMaisCaro] << endl;
    cout << "\tValor R$ : " << valores[posicaoItemMaisCaro] << endl;
    cout << "\tTipo: " << tipoItemMaisCaro << endl;

    cout << "\nDados do item mais barato: " << endl;
    cout << "\tNome: " << nomes[posicaoItemMaisBarato] << endl;
    cout << "\tAno da publicação: " << anos[posicaoItemMaisBarato] << endl;
    cout << "\tValor R$ : " << valores[posicaoItemMaisBarato] << endl;
    cout << "\tTipo: " << tipoItemMaisBarato << endl;

    cout << "\nDados do Item mais recente do acervo: " << endl;
    cout << "\tNome: " << nomes[posicaoItemMaisRecente] << endl;
    cout << "\tValor: " << valores[posicaoItemMaisRecente] << endl;
    cout << "\tTipo: " << tipoItemMaisRecente << endl;

}