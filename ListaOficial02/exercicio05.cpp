#include <iostream>
using namespace std;

void apresentaTipoQuarto();
float calculaValorBaseHospedagem(char& tipoQuarto, int& quantidadeDiarias);
float calculaAdicicionalQtdPessoas(int& quantidadeHospedes, int& quantidadeDiarias);
float calculaAdicionalMassagem(int& quantidadeMassagem);
float obtemTaxaISS(int& quantidadeDiarias);
void emitirNotaFiscal(long& numero, string& nome, char& quarto, int& qtdDiarias, float& massagem, float& frigobar, float& bar, float& iss, float& total);
string obtemNomeQuarto(char& quarto);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 05 - Hotel Sono Bom\n\n";

	long numeroReserva;
	string nomeResponsavel;
	char tipoQuarto;
	int quantidadeHospedes, quantidadeDiarias, quantidadeMassagens;
	float valorConsumoFrigobar, valorConsumoBar, valorBaseHospedagem, valorAdicionalQtdPessoas, valorAdicionalMassagem;
	float taxaManutencaoFrigobar = 12, comissaoGarcom = 0.10, taxaISS, total, totalFrigobar, totalBar, totalISS;

	cout << "Número da Reserva: ";
	cin >> numeroReserva;

	cout << "Nome Responsavel: ";
	cin >> nomeResponsavel;

	cout << "Quantidade de Hóspedes: ";
	cin >> quantidadeHospedes;

	apresentaTipoQuarto();
	cout << "\nEscolha o Tipo de Quarto: ";
	cin >> tipoQuarto;

	cout << "\nQuantidade de Diárias: ";
	cin >> quantidadeDiarias;

	cout << "\nQuantidade de Massagens: ";
	cin >> quantidadeMassagens;

	cout << "\nValor Consumo no Frigobar: ";
	cin >> valorConsumoFrigobar;

	cout << "\nValor Consumo no Bar: ";
	cin >> valorConsumoBar;

	valorBaseHospedagem = calculaValorBaseHospedagem(tipoQuarto, quantidadeDiarias);
	valorAdicionalQtdPessoas = calculaAdicicionalQtdPessoas(quantidadeHospedes, quantidadeDiarias);
	valorAdicionalMassagem = calculaAdicionalMassagem(quantidadeMassagens);

	totalFrigobar = valorConsumoFrigobar + taxaManutencaoFrigobar;
	totalBar = valorConsumoBar + (valorConsumoBar * comissaoGarcom);

	if (quantidadeHospedes > 2) {
		valorBaseHospedagem += valorAdicionalQtdPessoas;
	}
	if (quantidadeMassagens > 0) {
		valorBaseHospedagem += valorAdicionalMassagem;
	}
	if (valorConsumoFrigobar > 0) {
		valorBaseHospedagem += totalFrigobar;
	}
	if (valorConsumoBar > 0) {
		valorBaseHospedagem += totalBar;
	}

	taxaISS = obtemTaxaISS(quantidadeDiarias);
	totalISS = (taxaISS * valorBaseHospedagem);
	total = valorBaseHospedagem + totalISS;


	emitirNotaFiscal(numeroReserva, nomeResponsavel, tipoQuarto, quantidadeDiarias, valorAdicionalMassagem, totalFrigobar, totalBar, totalISS, total);

}

void apresentaTipoQuarto() {
	cout << "\n# Tipos de Quarto";
	cout << "\n| 1 - Standard: R$ 50.00 a diária";
	cout << "\n| 2 - Luxo: R$ 80.00 a diária";
	cout << "\n| 3 - VIP: R$ 150.00 a diária";
}

float calculaValorBaseHospedagem(char& tipoQuarto, int& quantidadeDiarias) {
	float valorDiaria, valorBaseHospedagem;
	switch (tipoQuarto)
	{
	case '1':
		valorDiaria = 50.00;
		valorBaseHospedagem = valorDiaria * quantidadeDiarias;
		break;
	case '2':
		valorDiaria = 80.00;
		valorBaseHospedagem = valorDiaria * quantidadeDiarias;
		break;
	case '3':
		valorDiaria = 150.00;
		valorBaseHospedagem = valorDiaria * quantidadeDiarias;
		break;
	default:
		break;
	}

	return valorBaseHospedagem;
}

float calculaAdicicionalQtdPessoas(int& quantidadeHospedes, int& quantidadeDiarias) {
	float valorAdd = 0;
	if (quantidadeHospedes >= 3 && quantidadeHospedes <= 4) {
		valorAdd = 20;
	}
	else if (quantidadeHospedes > 5) {
		valorAdd = 40;
	}
	float valorTotalAdd = valorAdd * quantidadeDiarias;
	return valorTotalAdd;
}

float calculaAdicionalMassagem(int& quantidadeMassagem) {
	float valorPorMassagem, total;
	if (quantidadeMassagem >= 1 && quantidadeMassagem <= 3)
		valorPorMassagem = 80;
	else if (quantidadeMassagem > 3)
		valorPorMassagem = 65;
	total = valorPorMassagem * quantidadeMassagem;
	return total;
}

float obtemTaxaISS(int& quantidadeDiarias) {
	float valorTaxa;
	if (quantidadeDiarias > 5) {
		valorTaxa = 0.03;
	}
	else if (quantidadeDiarias > 10) {
		valorTaxa = 0.01;
	}
	else {
		valorTaxa = 0.05;
	}
	return valorTaxa;
}

void emitirNotaFiscal(long& numero, string& nome, char& quarto, int& qtdDiarias, float& massagem, float& frigobar, float& bar, float& iss, float& total) {
	cout << "\n## Nota Fiscal";
	cout << "\nreserva: " << numero;
	cout << "\nnome responsavel: " << nome;
	cout << "\ntipo de quarto:..........." << obtemNomeQuarto(quarto);
	cout << "\nquantidade de diarias:...." << qtdDiarias;
	cout << "\nserviço de massagem:......R$ " << massagem;
	cout << "\nserviço frigobar..........R$" << frigobar;
	cout << "\nserviço bar...............R$" << bar;
	cout << "\nISS.......................R$" << iss;
	cout << "\nTOTAL.....................R$" << total;
}

string obtemNomeQuarto(char& quarto) {
	string nome = "";
	if (quarto == '1')
		nome = "Standard";
	else if (quarto == '2')
		nome = "Luxo";
	else if (quarto == '3')
		nome = "VIP";

	return nome;
}