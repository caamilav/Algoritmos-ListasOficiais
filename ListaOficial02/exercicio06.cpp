#include <iostream>
using namespace std;

void apresentaCategoria();
float obtemTaxaSaneamento(string& categoria);
void emitirNota(string& matricula, string& categoria, float& m3, float& saneamento, float& valorPIS, float& valorCofins, float& total);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 06 - Casan\n\n";

	int m3Consumidos;
	float taxaPIS = 0.65, taxaConfins = 0.03;
	float valorTaxa, novoValorTaxa, taxaSaneamento, valorPIS, valorCofins, totalConsumoEhSaneamento, totalConta;
	string matricula, categoria;

	cout << "\nInforme a Matricula: ";
	cin >> matricula;
	cout << "\nInforme o valor inteiro de m3 Consumidos: ";
	cin >> m3Consumidos;

	if (m3Consumidos <= 10) {
		valorTaxa = 2.99;
		novoValorTaxa = 5.48;
	}
	else if (m3Consumidos >= 11 && m3Consumidos <= 25) {
		valorTaxa = 5.48;
		novoValorTaxa = 7.69;
	}
	else if (m3Consumidos >= 26 && m3Consumidos <= 50) {
		valorTaxa = 7.69;
		novoValorTaxa = 9.22;
	}
	else {
		valorTaxa = 9.22;
	}

	float primeiros = 10 * valorTaxa;
	float resto = (m3Consumidos - 10) * novoValorTaxa;
	float totalPagarConsumo = primeiros + resto;

	apresentaCategoria();
	cout << "\nEscolha uma categoria: ";
	cin >> categoria;

	taxaSaneamento = obtemTaxaSaneamento(categoria);

	totalConsumoEhSaneamento = totalPagarConsumo + taxaSaneamento;
	valorPIS = totalConsumoEhSaneamento * taxaPIS;
	valorCofins = totalConsumoEhSaneamento * taxaConfins;
	
	totalConta = totalConsumoEhSaneamento + valorPIS + valorCofins;

	emitirNota(matricula, categoria, totalPagarConsumo, taxaSaneamento, valorPIS, valorCofins, totalConta);

}

void apresentaCategoria() {
	cout << "\nCategoria";
	cout << "\n| 1 - Residencial";
	cout << "\n| 2 - Comercial";
	cout << "\n| 3 - Industrial";
}

float obtemTaxaSaneamento(string& categoria) {
	float taxa;
	if (categoria == "1")
		taxa = 5;
	else if (categoria == "2")
		taxa = 10;
	else
		taxa = 15;

	return taxa;
}

void emitirNota(string &matricula, string &categoria, float&m3, float& saneamento, float& valorPIS, float& valorCofins, float& total) {
	cout << "\n## Casan";
	cout << "\nmatricula: " << matricula;
	cout << "\ncategoria: " << categoria;
	printf("\ntotal consumo m3......R$ %.2f", m3);
	printf("\nsaneamento básico.....R$ %.2f", saneamento);
	printf("\nPIS...................R$ %.2f",valorPIS);
	printf("\nCOFINS................R$ %.2f", valorCofins);
	printf("\nTOTAL.................R$ %.2f", total);
}
