#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 03\n\n";
	
	string nome, nomeMaisAlto, nomeMaisNovo;
	int idade, somadorIdade = 0, contadorIdade = 0, contadorMaior35 = 0;
	int menorIdade;
	float altura, media, maiorAltura;

	cout << "Informe o nome: ";
	cin >> nome;
	cout << "Informe a idade: ";
	cin >> idade;
	cout << "Informe a altura: ";
	cin >> altura;

	if (altura > 1.80) {
		somadorIdade += idade;
		contadorIdade++;
	}
	if (idade > 35)
		contadorMaior35++;
	
	nomeMaisAlto = nome;
	nomeMaisNovo = nome;
	menorIdade = idade;
	maiorAltura = altura;


	for (int i = 0; i < 20; i++) {

		cout << "Informe o nome: ";
		cin >> nome;

		cout << "Informe a idade: ";
		cin >> idade;

		cout << "Informe a altura: ";
		cin >> altura;

		if (altura > 1.80) {
			somadorIdade += idade;
			contadorIdade++;
		}

		if (idade > 35)
			contadorMaior35++;

		if (idade < menorIdade) {
			menorIdade = idade;
			nomeMaisNovo = nome;
		}

		if (altura > maiorAltura) {
			maiorAltura = altura;
			nomeMaisAlto = nome;
		}
	}
	
	media = somadorIdade / contadorIdade;
	cout << "\nA média de idade das pessoas com mais de 1.80 de altura é: " << media;
	cout << "\nO total de pessoas com mais de 35 anos é: " << contadorMaior35;
	cout << "\nO nome do mais alto é: " << nomeMaisAlto;
	cout << "\nO nome do mais novo é: " << nomeMaisNovo;

}
