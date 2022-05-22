/*Fa�a um algoritmo que leia o nome e o sal�rio bruto de um funcion�rio e calcule o sal�rio
l�quido do mesmo. Sobre o seu sal�rio bruto, incide um desconto de 10% para previd�ncia.
Feito o desconto para a previd�ncia, sobre o restante � feito um desconto de 25% a t�tulo
de imposto de renda. O algoritmo deve mostrar o nome do funcion�rio, o seu sal�rio bruto,
o seu sal�rio l�quido e os descontos.*/
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exerc�cio 05 - Sal�rio Funcion�rio");
	//variaveis
	string nomeFuncionario;
	float salarioBruto, salarioLiquido;
	float descontoPrevidencia = 0.10, impostoRenda = 0.25;
	
	//entrada
	cout << "Informe o Nome do Funcion�rio: ";
	cin >> nomeFuncionario;
	cout << "Informe o Sal�rio Bruto do Funcion�rio: ";
	cin >> salarioBruto;
	
	/*realiza o calculo para obter o valor total de desconto da previdencia e o do imposto de renda,
	atribui a soma desses resultados a variavel totalDesconto.*/
	float ValorTotalDescontoPrevidencia = salarioBruto*descontoPrevidencia;
	float ValorTotalImpostoDeRenda = (salarioBruto-ValorTotalDescontoPrevidencia)*impostoRenda;
	float totalDesconto = ValorTotalDescontoPrevidencia+ValorTotalImpostoDeRenda;
	/*para obter o sal�rio liquido do funcion�rio, a variavel salarioLiquido recebe o 
	valor de salarioBruto - totalDesconto*/
	salarioLiquido = salarioBruto - totalDesconto;
	
	//imprime saida
	cout << "\nFuncion�rio: "<<nomeFuncionario;
	cout << "\nSal�rio Bruto: "<< salarioBruto;
	cout << "\nSal�rio Liquido: " << salarioLiquido;
	cout << "\nValor Desconto Previd�ncia: " << ValorTotalDescontoPrevidencia;
	cout << "\nValor Imposto de Renda: " << ValorTotalImpostoDeRenda;
	
}
void exibeTitulo(string titulo){
	cout << "\t" << titulo << "\n\n";
}
