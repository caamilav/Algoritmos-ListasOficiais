#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 04\n\n";
	
	int n;
	cout << "Exibir Tabuada do N�mero: ";
	cin >> n;

	for (int i = 1; i <= 10; i++) {
		int resultado = n * i;
		cout << n << " * " << i << " = " << resultado;
		cout << "\n";
	}
}
