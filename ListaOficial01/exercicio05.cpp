/*Faça um algoritmo que leia o nome e o salário bruto de um funcionário e calcule o salário
líquido do mesmo. Sobre o seu salário bruto, incide um desconto de 10% para previdência.
Feito o desconto para a previdência, sobre o restante é feito um desconto de 25% a título
de imposto de renda. O algoritmo deve mostrar o nome do funcionário, o seu salário bruto,
o seu salário líquido e os descontos.*/
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exercício 05 - Salário Funcionário");
	//variaveis
	string nomeFuncionario;
	float salarioBruto, salarioLiquido;
	float descontoPrevidencia = 0.10, impostoRenda = 0.25;
	
	//entrada
	cout << "Informe o Nome do Funcionário: ";
	cin >> nomeFuncionario;
	cout << "Informe o Salário Bruto do Funcionário: ";
	cin >> salarioBruto;
	
	/*realiza o calculo para obter o valor total de desconto da previdencia e o do imposto de renda,
	atribui a soma desses resultados a variavel totalDesconto.*/
	float ValorTotalDescontoPrevidencia = salarioBruto*descontoPrevidencia;
	float ValorTotalImpostoDeRenda = (salarioBruto-ValorTotalDescontoPrevidencia)*impostoRenda;
	float totalDesconto = ValorTotalDescontoPrevidencia+ValorTotalImpostoDeRenda;
	/*para obter o salário liquido do funcionário, a variavel salarioLiquido recebe o 
	valor de salarioBruto - totalDesconto*/
	salarioLiquido = salarioBruto - totalDesconto;
	
	//imprime saida
	cout << "\nFuncionário: "<<nomeFuncionario;
	cout << "\nSalário Bruto: "<< salarioBruto;
	cout << "\nSalário Liquido: " << salarioLiquido;
	cout << "\nValor Desconto Previdência: " << ValorTotalDescontoPrevidencia;
	cout << "\nValor Imposto de Renda: " << ValorTotalImpostoDeRenda;
	
}
void exibeTitulo(string titulo){
	cout << "\t" << titulo << "\n\n";
}
