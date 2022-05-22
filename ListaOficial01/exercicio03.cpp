/*A revendedora Pica Pau Ltda., paga a seus vendedores, um sal�rio fixo de R$ 350,00, mais
uma comiss�o fixa de R$ 50,00 por carro vendido e mais 5% do valor das vendas. Fa�a um
algoritmo que leia o nome do vendedor, quantos carros vendeu e o valor total das vendas.
Ao final, apresente o todos os dados lidos e o sal�rio total do vendedor.*/
#include <iostream>
using namespace std;

//functions 
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exerc�cio 03 - Pica Pau Ltda");
	//variaveis
	string nomeVendedor;
	float salarioFixo = 350, comissaoPorVenda = 50, comissaoTotalVendas = 0.5, valorTotalVendas, salarioFinal;
	int quantidadeVendas;

	cout << "Informe o nome do vendedor: ";
	cin >> nomeVendedor;	
	cout << "Informe a quantidade de vendas: ";
	cin >> quantidadeVendas;
	cout << "Informe o valor total das vendas: ";
	cin >> valorTotalVendas;
	
	//calcula o salario final (fixo + comiss�es)
	salarioFinal = salarioFixo + (comissaoPorVenda*quantidadeVendas)+(comissaoTotalVendas*valorTotalVendas);
	
	//imprime saida
	cout << "\nNome do Vendedor: " <<nomeVendedor;
	cout << "\nQuatidade de Vendas: "<<quantidadeVendas;
	cout << "\nValor Total das Vendas: " << valorTotalVendas;
	cout << "\nSal�rio final: " << salarioFinal;	
}
//functions
void exibeTitulo(string titulo){
	cout << "\t" << titulo <<"\n\n";
}
