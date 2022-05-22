//Faça um algoritmo para calcular o volume de uma esfera de raio r.
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exercício 06 - Volume de uma Esfera");
	
	float pi = 3.14, raio;
	
	cout << "Infome o Raio da Esfera: ";
	cin >> raio;

	float volume = 4 * pi * (raio*raio*raio) / 3;
	
	cout << "O volume da esfera é "<<volume;
}

void exibeTitulo(string titulo){
	cout << "\t" << titulo << "\n\n";
}
