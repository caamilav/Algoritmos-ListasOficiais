//Fa�a um algoritmo que leia um vetor de 12 elementos com o nome dos meses por extenso.
//Depois solicite ao usu�rio o n�mero do m�s e o algoritmo dever� escrever na tela o nome
//do m�s.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 01 " << endl;
	string meses[12] = {
	"Janeiro", "Fevereiro","Mar�o", "Abril", "Maio", "Junho",
	"Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
	};
	int numero, posicao;

	cout << "Informe o n�mero do m�s: ";
	cin >> numero;

	if (numero < 1 || numero > 12) {
		cout << "N�mero inv�lido";
	}
	else {
		posicao = numero - 1;
		cout << meses[posicao] << endl;
	}
}