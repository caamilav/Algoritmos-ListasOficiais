/*Considere que para um automóvel que realizou determinado percurso, se tenha: marca,
quilometragem inicial, quilometragem final e litros consumidos. Faça um algoritmo que
mostre um relatório contendo, além destes dados, qual o consumo do automóvel em
Km/litros.*/
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exercício 04 - Consumo Km/L");
	//variaveis
	string marcaCarro;
	float kmInicial, kmFinal, litrosConsumidos, consumo;
	//entrada
	cout << "Informe a Marca do Carro: ";
	cin >> marcaCarro;
	cout << "Informe a quilometragem inicial: ";
	cin >> kmInicial;
	cout << "Informe a quilometragem final: ";
	cin >> kmFinal;
	cout << "Informe o total de litros consumidos: ";
	cin >> litrosConsumidos;
	//calcula consumo de combustivel 
	consumo = (kmFinal - kmInicial)/litrosConsumidos;	
	//imprime saida
	cout << "\nMarca: "<< marcaCarro;
	cout << "\nKm Inicial: "<<kmInicial;
	cout << "\nKm Final: "<<kmFinal;
	cout << "\nLitros consumidos: "<<litrosConsumidos;
	cout << "\nConsumo Km/L: "<<consumo;	
}
void exibeTitulo(string titulo){
	cout << "\t"<< titulo << "\n\n";
}

