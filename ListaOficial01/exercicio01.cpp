/*Construa um algoritmo que leia a cota��o do d�lar, leia um valor em d�lares, converta esse
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
	exibeTitulo("Exerc�cio 01 - Convers�o de Moeda");
	//declara��o de variaveis
	float valorEmDolar, cotacaoAtual, valorEmReal;	
	
	//entrada
	cout << "Digite a cota��o atual do D�lar: ";
	cin >> cotacaoAtual;
	cout << "Digite o valor em D�lar: ";
	cin >> valorEmDolar;
	
	//realiza a convers�o e armazena o resultado na variavel valorEmReal
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

//fun��o que controla se a aplica��o continua a ser executada ou encerra
bool opcaoContinuar(bool &continuar){
	string opcao;
	cout << "Deseja realizar outra convers�o? Digite 1 - para sim ou 0 - para n�o: ";
	cin >> opcao;
	//valida op��o escolhida
	while(opcao != "1" && opcao != "0"){
		cout << "\nPor favor, escolha uma op��o v�lida!";
		cout << "\nDeseja realizar outra convers�o? Digite 1 - para sim ou 0 - para n�o: ";
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

