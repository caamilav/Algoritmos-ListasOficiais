/*Construa um algoritmo que leia a cotação do dólar, leia um valor em dólares, converta esse
valor para Real e mostre o resultado.*/
#include <iostream>
using namespace std;

//functions
bool opcaoContinuar(bool &x);
void pulaLinha();
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	bool continuar = true;
	//executa o codigo abaixo enquanto a variavel bool continuar for verdadeira
	while(continuar){
	exibeTitulo("Exercício 01 - Conversão de Moeda");
	//declaração de variaveis
	float valorEmDolar, cotacaoAtual, valorEmReal;	
	
	//entrada
	cout << "Digite a cotação atual do Dólar: ";
	cin >> cotacaoAtual;
	cout << "Digite o valor em Dólar: ";
	cin >> valorEmDolar;
	
	//realiza a conversão e armazena o resultado na variavel valorEmReal
	valorEmReal = cotacaoAtual*valorEmDolar;
	
	//imprime a saida	
	cout << "US$ " <<valorEmDolar <<" = R$ " << valorEmReal;	
		
	pulaLinha();
	
	opcaoContinuar(continuar);
} }

//functions 

void exibeTitulo(string titulo){
	cout << "\t" << titulo <<"\n\n";
}

//função que controla se a aplicação continua a ser executada ou encerra
bool opcaoContinuar(bool &continuar){
	string opcao;
	cout << "Deseja realizar outra conversão? Digite 1 - para sim ou 0 - para não: ";
	cin >> opcao;
	//valida opção escolhida
	while(opcao != "1" && opcao != "0"){
		cout << "\nPor favor, escolha uma opção válida!";
		cout << "\nDeseja realizar outra conversão? Digite 1 - para sim ou 0 - para não: ";
		cin >> opcao;
	}

	if(opcao == "1"){
		system("cls");
		continuar = true;
	}
	else if (opcao == "0"){
		cout << "Programa encerrado";
		continuar = false;
	}
	return continuar;
}

void pulaLinha(){
	cout <<"\n\n";
}

