#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercício 02\n\n";

	string nome;
	float nota, totalNotas = 0, media;
	bool existeNotaZero = false;

	for (int i = 0; i < 20; i++) {
		cout << "Informe o nome do aluno: ";
		cin >> nome;
		cout << "Informe a nota: ";
		cin >> nota;
		totalNotas += nota;
		if (nota == 0)
			existeNotaZero = true;
	}

	media = totalNotas / 20;
	cout << "\nA média da turma é: " << media;
	if (existeNotaZero)
		cout << "\nExiste aluno com nota igual a 0 (zero)!";
	else
		cout << "\nNenhum aluno com nota igual a 0 (zero)!";

}