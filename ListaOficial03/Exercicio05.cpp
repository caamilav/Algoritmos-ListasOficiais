#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 05\n\n";

	float totalCandidato1 = 0, totalCandidato2 = 0, totalCandidato3 = 0, totalNulo = 0, totalBranco = 0;
	int opcaoSelecionada;
	string resultado; 
	for (int i = 0; i < 20; i++) {
		cout << "\nVOTAÇÃO ELEITORAL";
		cout << "\n | 1 = Candidato 1 \n | 2 = Candidato 2 \n | 3 = Candidato 3 \n | 5 = Voto nulo \n | 6 = Voto em branco";
		cout << "\nInforme o seu voto: ";
		cin >> opcaoSelecionada;

		if (opcaoSelecionada == 1)
			totalCandidato1++;
		else if (opcaoSelecionada == 2)
			totalCandidato2++;
		else if (opcaoSelecionada == 3)
			totalCandidato3++;
		else if (opcaoSelecionada == 5)
			totalNulo++;
		else if (opcaoSelecionada == 6)
			totalBranco++;
	}

	if (totalCandidato1 > totalCandidato2 && totalCandidato1 > totalCandidato3)
		resultado = "Candidato 1 é o vencedor";
	else if (totalCandidato2 > totalCandidato1 && totalCandidato2 > totalCandidato3)
		resultado = "Candidato 2 é o vencedor";
	else if (totalCandidato3 > totalCandidato1 && totalCandidato3 > totalCandidato2)
		resultado = "Candidato 3 é o vencedor";

	cout << "\n-----------------------\n";
	cout << "Resultado";
	cout << "\nCandidato 1 recebeu " << (totalCandidato1 / 20) * 100 << "% dos votos";
	cout << "\nTotal de votos: " << totalCandidato1;
	cout << "\nCandidato 2 recebeu " << (totalCandidato2 / 20) * 100 << "% dos votos";
	cout << "\nTotal de votos: " << totalCandidato2;
	cout << "\nCandidato 3 recebeu " << (totalCandidato3 / 20) * 100 << "% dos votos";
	cout << "\nTotal de votos: " << totalCandidato3;
	cout << "\nVotos Nulos = " << (totalNulo / 20) * 100 << "% dos votos";
	cout << "\nTotal de votos: " << totalNulo;
	cout << "\nVotos em Branco = " << (totalBranco / 20) * 100 << "% dos votos";
	cout << "\nTotal de votos: " << totalBranco;
	cout << "\n\n";
	cout << resultado;


}
