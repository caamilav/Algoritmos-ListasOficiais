#include <iostream>
using namespace std;

void exibeMenu();
float obtemValor();
void emitirExtrato(float& saldo);
void mensagem(string tipo, float& valor);

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 04 - Conta Bancária\n\n";

	long numeroConta;
	float saldo = 0, valor;
	char opcaoMenu;

	cout << "Número da Conta: ";
	cin >> numeroConta;
	do {
		exibeMenu();
		cout << "\nEscolha uma opção: ";
		cin >> opcaoMenu;

		switch (opcaoMenu) {
		case '1':
			valor = obtemValor();
			saldo += valor;
			mensagem("deposito", valor);
			break;
		case '2':
			valor = obtemValor();
			if (valor > saldo)
				cout << "Saldo insuficiente";
			else {
				saldo -= valor;
				mensagem("saque", valor);
			}
			break;
		case '3':
			emitirExtrato(saldo);
			break;
		case '4':
			exit;
		}
	} while (opcaoMenu != '4');
}


void exibeMenu() {
	cout << "\n\n|1 - Depositar\n|2 - Sacar \n|3 - Emitir Extrato\n|4 - Encerrar\n";
}

float obtemValor() {
	float valor;
	cout << "\nValor do operação: ";
	cin >> valor;
	return valor;
}

void emitirExtrato(float& saldo) {
	cout << "\n# Emitir Extrato";
	//cout << "\nSaldo: R$" << saldo;
	printf("\nSaldo: R$  %.2f", saldo);
	cout << "\n_____________________";
}

void mensagem(string tipo, float &valor) {	
	if (tipo == "deposito") {
		printf("Deposito realizado no valor de R$ %.2f", valor);
	}
	else if (tipo == "saque") {
		printf("Saque realizado no valor de R$ %.2f", valor);
	}
}
