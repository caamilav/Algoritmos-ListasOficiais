/*Uma sorveteria vende 3 tipos de picolés. Sabendo-se que o picolé do tipo 1 é vendido por
R$ 0,50, o do tipo 2 por R$ 0,60 e o do tipo 3 por R$ 0,75, faça um algoritmo que, para cada
tipo de picolé, mostre a quantidade vendida e o total arrecadado.*/
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);
void pulaLinha();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	exibeTitulo("Exercício 02 - Picolés");
	
 	float valorPicoleTipo1 = 0.50, valorPicoleTipo2 = 0.60, valorPicoleTipo3 = 0.75;   
    int qtdVendasPicoleTipo1, qtdVendasPicoleTipo2, qtdVendasPicoleTipo3;
    float totalPicoleTipo1, totalPicoleTipo2, totalPicoleTipo3;
	
	cout <<  "Quantidade de vendas de Picolé T1: ";
	cin >> qtdVendasPicoleTipo1;
	cout <<  "Quantidade de vendas de Picolé T2: ";
	cin >> qtdVendasPicoleTipo2;
	cout <<  "Quantidade de vendas de Picolé T3: ";
	cin >> qtdVendasPicoleTipo3;
	
    totalPicoleTipo1 = valorPicoleTipo1*qtdVendasPicoleTipo1;
    totalPicoleTipo2 = valorPicoleTipo2*qtdVendasPicoleTipo2;
    totalPicoleTipo3 = valorPicoleTipo3*qtdVendasPicoleTipo3;

    cout << "\n- Picolé T1";
    cout << "\n\tQuantidade Vendida: " << qtdVendasPicoleTipo1;
    cout << "\n\tTotal Arrecadado: R$" << totalPicoleTipo1;
    pulaLinha();
    cout << "\n- Picole T2";
    cout << "\n\tQuantidade Vendida: " << qtdVendasPicoleTipo2;
    cout << "\n\tTotal Arrecadado: R$" << totalPicoleTipo2;
    pulaLinha();
    cout << "\n- Picole T3";
    cout << "\n\tQuantidade Vendida: " << qtdVendasPicoleTipo3;
    cout << "\n\tTotal Arrecadado: R$" << totalPicoleTipo3;
    pulaLinha();
    float montanteTotalArrecado = totalPicoleTipo1+totalPicoleTipo2+totalPicoleTipo3;
    cout << "Montante Total Arrecadado (T1+T2+T3) = " << montanteTotalArrecado;

}

//functions 
void exibeTitulo(string titulo){
	cout << "\t"<<titulo << "\n\n";
}
void pulaLinha(){
	cout << "\n\n";
}
