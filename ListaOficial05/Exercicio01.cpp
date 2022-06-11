//Faça um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso.
//Depois solicite ao usuário o número do mês e o algoritmo deverá escrever na tela o nome
//do mês.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 01 " << endl;
	string meses[12] = {
	"Janeiro", "Fevereiro","Março", "Abril", "Maio", "Junho",
	"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	};
	int numero, posicao;

	cout << "Informe o número do mês: ";
	cin >> numero;

	if (numero < 1 || numero > 12) {
		cout << "Número inválido";
	}
	else {
		posicao = numero - 1;
		cout << meses[posicao] << endl;
	}
}