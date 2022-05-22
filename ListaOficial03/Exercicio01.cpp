#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 01\n\n";

	string nome;
	int contadorMasculino = 0, contadorFeminino = 0, sexo;

	for (int i = 0; i < 10; i++) {
		cout << "Informe o nome da pessoa: ";
		cin >> nome;
		cout << "Informe o sexo (1 - masculino | 2 - feminino): ";
		cin >> sexo;
		if (sexo != 1 && sexo != 2) {
			cout << "Sexo inválido.";
			break;
		}
		if (sexo == 1)
			contadorMasculino++;
		else
			contadorFeminino++;
	}

	cout << "\nTotal de Homens: " << contadorMasculino;
	cout << "\nTotal de Mulheres: " << contadorFeminino;

}