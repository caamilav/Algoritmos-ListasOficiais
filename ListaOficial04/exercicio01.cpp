////Construa um algoritmo que leia o nome e a nota de 15 alunos na prova de algoritmos e ao
//final apresente a média das notas da turma. Se o usuário desejar encerrar a leitura antes dos
//15 alunos, o mesmo deve digitar “fim” para o nome.

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota, media, somador = 0;
    string nome;
    int contador = 0;

    while ( nome != "fim" && contador < 15 ) {
        cout << "Informe o nome do aluno: ";
        cin >> nome;
        if(nome != "fim"){
        cout << "Informe a nota do aluno: ";
        cin >> nota;        
        contador++;
        somador += nota;
        }
    }
    media = somador / contador;
    cout << "A Média da turma é " << media;

}
