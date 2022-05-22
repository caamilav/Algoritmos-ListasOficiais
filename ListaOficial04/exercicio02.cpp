//Construa um algoritmo que leia o nome e a idade de vários alunos de uma turma e ao final
//apresente na tela o nome e a idade do aluno mais velho.Como o número de alunos é
//indeterminado, faça com que para parar a leitura dos nomes e idades, o usuário tenha que
//digitar 0 (zero)para a idade.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome, nomeMaisVelho;
    int idade = 1, idadeMaisVelho, contador = 0;

    while (idade != 0) {
        cout << "Informe a idade do Aluno: ";
        cin >> idade;
        if (idade != 0) {
            cout << "Informe o nome do Aluno: ";
            cin >> nome;
            if (contador == 0) {
                nomeMaisVelho = nome;
                idadeMaisVelho = idade;
            }
            if (idade > idadeMaisVelho) {
                idadeMaisVelho = idade;
                nomeMaisVelho = nome;
            }
            contador++;
        }
    }

    cout << "\nNome do aluno mais velho: " << nomeMaisVelho;
    cout << "\nIdade do aluno mais velho: " << idadeMaisVelho;

}
