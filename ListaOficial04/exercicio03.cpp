//Construa um algoritmo que simule uma eleição.Essa eleição possui 3 candidatos.O algoritmo
//deve ler o voto de um número indeterminado de eleitores e apresentar na tela o percentual
//de cada candidato.
//Para votar no candidato 1 utilize a entrada ‘1’
//Para votar no candidato 2 utilize a entrada ‘2’
//Para votar no candidato 3 utilize a entrada ‘3’
//Para encerrar a leitura dos votos utilize a entrada ‘0’

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int voto = 4, qtdVotos = 0;
    float votosCandidatoUm = 0, votosCandidatoDois = 0, votosCandidatoTres = 0;
    float percentualCandidatoUm, percentualCandidatoDois, percentualCandidatoTres;

    while (voto != 0) {
        cout << "\nEleição\n";
        cout << "Para votar no candidato Um utilize a entrada ‘1’\n";
        cout << "Para votar no candidato Dois utilize a entrada ‘2’\n";
        cout << "Para votar no candidato Três utilize a entrada ‘3’\n";
        cout << "Vote: ";
        cin >> voto;

        if (voto == 1) {
            votosCandidatoUm++;
        }
        if (voto == 2) {
            votosCandidatoDois++;
        }
        if (voto == 3) {
            votosCandidatoTres++;
        }
        if (voto != 0) {
            qtdVotos++;
        }

    }

    percentualCandidatoUm = (votosCandidatoUm/qtdVotos) * 100;
    percentualCandidatoDois = (votosCandidatoDois / qtdVotos) * 100;
    percentualCandidatoTres = (votosCandidatoTres / qtdVotos) * 100;

    cout << "\nPercentual de votos do Candidato Um: " << percentualCandidatoUm << "%";
    cout << "\nPercentual de votos do Candidato Dois: " << percentualCandidatoDois << "%";
    cout << "\nPercentual de votos do Candidato Três: " << percentualCandidatoTres << "%";

}