#include <iostream>
using namespace std;

void validarMeioPagamento(string meioPagamento);
void emitirNotaFiscal(float& valorAutomovel, float& valorTotalOpcionais, string& notaAdd, float& total);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 03 - Concession�ria Carrara\n\n";

#pragma region variaveis
	float valorAutomovel, valorTotalOpcionais = 0, total;
	float valorVidroEletrico = 500.00, valorArCondicionado = 2000.00, valorTravaCentralAlarme = 500.00,
		valorPinturaMetalica = 1000.00, valorDirecaoHidraulica = 2500.00;
	bool vidroEletrico = false, arCondicionado = false, travaCentralAlarme = false,
		pinturaMetalica = false, direcaoHidraulica = false;
	string opcao, meioPagamento, notaAdd = "";

#pragma endregion

	cout << "Informe o Valor do Automovel: ";
	cin >> valorAutomovel;

	cout << "\n# Opcionais\n";
	cout << "| Vidro El�trico  R$ 500.00\n";
	cout << "1 - sim / 0 - n�o\n";
	cout << "Escolha uma op��o: ";
	cin >> vidroEletrico;

	cout << "\n| Ar condicionado R$ 2000.00\n";
	cout << "1 - sim / 0 - n�o\n";
	cout << "Escolha uma op��o: ";
	cin >> arCondicionado;

	cout << "\n| Trava central e Alarme R$ 500.00\n";
	cout << "1 - sim / 0 - n�o\n";
	cout << "Escolha uma op��o: ";
	cin >> travaCentralAlarme;

	cout << "\n| Pintura Met�lica R$ 1000.00\n";
	cout << "1 - sim / 0 - n�o\n";
	cout << "Escolha uma op��o: ";
	cin >> pinturaMetalica;

	cout << "\n| Dire��o Hidr�ulica R$ 2500.00\n";
	cout << "1 - sim / 0 - n�o\n";
	cout << "Escolha uma op��o: ";
	cin >> direcaoHidraulica;

	if (vidroEletrico) {
		valorTotalOpcionais += valorVidroEletrico;
		notaAdd += "\n+ vidro el�trico..............R$ 500.00";
	}
	if (arCondicionado) {
		valorTotalOpcionais += valorArCondicionado;
		notaAdd += "\n+ ar condicionado.............R$ 2000.00";
	}
	if (travaCentralAlarme) {
		valorTotalOpcionais += valorTravaCentralAlarme;
		notaAdd += "\n+ trava central e alarme......R$ 500.00";
	}
	if (pinturaMetalica) {
		valorTotalOpcionais += valorPinturaMetalica;
		notaAdd += "\n+ pintura met�lica............R$ 1000.00";
	}
	if (direcaoHidraulica) {
		valorTotalOpcionais += valorDirecaoHidraulica;
		notaAdd += "\n+ dire��o hidr�ulica..........R$ 2500.00";
	}

	total = valorAutomovel + valorTotalOpcionais;
	cout << "\nTotal do Automovel: R$" << total;

	cout << "\n\n# M�todo de Pagamento: \n| 1 - � vista = desconto de 5%\n| 2 - a prazo";
	cout << "\nEscolha um m�todo de pagamento: ";
	cin >> meioPagamento;

	validarMeioPagamento(meioPagamento);

	//desconto de 5% para pagamento a vista
	if (meioPagamento == "1") {
		total -= total * 0.05;
	}

	emitirNotaFiscal(valorAutomovel, valorTotalOpcionais, notaAdd, total);
}

void validarMeioPagamento(string meioPagamento) {
	while (meioPagamento != "1" && meioPagamento != "2") {
		cout << "Por favor, escolha um m�todo de pagamento v�lido.";
		cout << "\n\nM�todo de Pagamento: \n| 1 - � vista = desconto de 5%\n| 2 - a prazo";
		cout << "\nEscolha um m�todo de pagamento: ";
		cin >> meioPagamento;
	}
}

void emitirNotaFiscal(float& valorAutomovel, float& valorTotalOpcionais, string& notaAdd, float& total) {
	cout << "\n\n## Nota Fiscal";
	cout << "\nValor Automovel:..............R$ " << valorAutomovel;
	if (valorTotalOpcionais != 0) {
		cout << "\nOpcionais Adquiridos: " << notaAdd;
		cout << "\nValor Opcionais Adquiridos:...R$ " << valorTotalOpcionais;
	}
	cout << "\nTOTAL:........................R$ " << total;
}