#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 02 - Nota e Conceito\n\n";

	int nota;
	char conceito;

	cout << "Nota: ";
	cin >> nota;

	if (nota < 0 || nota >  100) {
		cout << "Nota inválida\n* a nota deve ser um valor inteiro entre 0 e 100";
	}
	else {
		if (nota >= 0 && nota <= 39) {
			conceito = 'E';
		}
		else if (nota >= 40 && nota <= 59) {
			conceito = 'D';
		}
		else if (nota >= 60 && nota <= 75) {
			conceito = 'C';
		}
		else if (nota >= 76 && nota <= 89) {
			conceito = 'B';
		}
		else {
			conceito = 'A';
		}

		cout << "\n---\nNota: " << nota << "\nConceito: " << conceito;
	}

}
