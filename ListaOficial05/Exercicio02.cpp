#include <iostream>
using namespace std;


string ObtemSexo(int posicaoAluno, int sexos[500]) {
	if (sexos[posicaoAluno] == 1) {
		return "Feminino";
	}
	else {
		return "Masculino";
	}
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	cout << "Exerc�cio 02 " << endl;

	#pragma region arrays
	string nomes[500];
	int idades[500];
	int sexos[500];
	float notas[500];
	#pragma endregion

	#pragma region variaveis
	int posicao = 0;
	float somadorNotas = 0, somadorNotasF = 0, somadorNotasM = 0;
	int contadorAlunos = 0, contadorAlunosF = 0, contadorAlunosM = 0;
	int somadorIdades = 0;
	float mediaIdades, mediaF, mediaM;
	int posicaoAlunoMaisVelho = 0, posicaoAlunoMaisNovo = 0, posicaoMelhorAluno = 0;

	#pragma endregion

	#pragma region leitura de dados;

	string nome;
	while (nome != "fim") {
		cout << "\nInforme o nome: ";
		cin >> nome;

		if (nome != "fim") {
			nomes[posicao] = nome;
			cout << "Informe a idade: ";
			cin >> idades[posicao];
		
			do {
				cout << "Informe o sexo 1 - feminino 2 - masculino: ";
				cin >> sexos[posicao];
			} while (sexos[posicao] != 1 && sexos[posicao] != 2);

			cout << "Informe a nota: ";
			cin >> notas[posicao];
			
			cout << "Aluno registrado com sucesso!" << endl;
			cout << "__________________________________" << endl;

			somadorIdades += idades[posicao];
			contadorAlunos++;
			posicao++;

		}
	}
	#pragma endregion

	cout << "-----------------INFORMA��ES-----------------" << endl;
	//a) Calcule e informe a faixa et�ria da turma;
		mediaIdades = somadorIdades / contadorAlunos;
		cout << "\nA faixa et�ria da turma � " << mediaIdades << endl;

	//b) Verifique se h� algum aluno chamado �Z�, e caso positivo mande um abra�o pra ele atrav�s de mensagem;
	for (int i = 0; i < posicao; i++)
	{
		if (nomes[i] == "ze" || nomes[i] == "Ze")
		{
			cout << "\nZ�, grande abra�o!" << endl;
		}
	}

	#pragma region 	//c) Calcule a m�dia de nota dos homens e mulheres, e informe qual sexo possui a melhor m�dia;

	for (int i = 0; i < posicao; i++)
	{	
		if (sexos[i] == 1) {
			somadorNotasF += notas[i];
			contadorAlunosF++;
		} else if (sexos[i] == 2) {
			somadorNotasM += notas[i];
			contadorAlunosM++;
		}
	}

	mediaF = somadorNotasF / contadorAlunosF;
	mediaM = somadorNotasM / contadorAlunosM;

	cout << "\nM�dia de Notas";
	cout << "\n\t- M�dia Feminina: " << mediaF << endl;
	cout << "\t- M�dia Masculina: " << mediaM << endl;

	if (mediaF > mediaM) {
		cout << "O sexo feminino possui a maior m�dia";
	}
	else if (mediaM > mediaF) {
		cout << "O sexo masculino possui a maior m�dia";
	}
	else {
		cout << "A m�dia de notas feminina e masculina s�o iguais";
	}

	#pragma endregion

	#pragma region //d) Verifique e apresente os dados do aluno mais velho e do aluno mais novo;

	
	//o seguinte for obt�m a posi��o do aluno mais velho e do aluno mais novo
	for (int j = 0; j < posicao; j++) {
		if (idades[j] > idades[posicaoAlunoMaisVelho]) {
			posicaoAlunoMaisVelho = j;
		}

		if (idades[j] < idades[posicaoAlunoMaisNovo]) {
			posicaoAlunoMaisNovo = j;
		}
	}
	
	string strSexoAlunoMaisVelho = ObtemSexo(posicaoAlunoMaisVelho, sexos);
	string strSexoAlunoMaisNovo = ObtemSexo(posicaoAlunoMaisNovo, sexos);

	cout << "\n\nDados do aluno mais velho: " << endl;
	cout << "\tNome: " << nomes[posicaoAlunoMaisVelho] << endl;
	cout << "\tIdade: " << idades[posicaoAlunoMaisVelho] << endl;
	cout << "\tSexo: " << strSexoAlunoMaisVelho << endl;
	cout << "\tNota: " << notas[posicaoAlunoMaisVelho] << endl;

	cout << "\n\nDados do aluno mais novo: " << endl;
	cout << "\tNome: " << nomes[posicaoAlunoMaisNovo] << endl;
	cout << "\tIdade: " << idades[posicaoAlunoMaisNovo] << endl;
	cout << "\tSexo: " << strSexoAlunoMaisNovo << endl;
	cout << "\tNota: " << notas[posicaoAlunoMaisNovo] << endl;
	#pragma endregion

	//e) Informe o nome e a nota do melhor aluno, e se este � homem ou mulher.
	for (int k = 0; k < posicao; k++) {
		if (notas[k] > notas[posicaoMelhorAluno])
			posicaoMelhorAluno = k;
	}

	string strSexoMelhorAluno = ObtemSexo(posicaoMelhorAluno, sexos);
	cout << "\n Melhor Aluno: ";
	cout << "\n\tNome: " << nomes[posicaoMelhorAluno];
	cout << "\n\tSexo: " << strSexoMelhorAluno;

}

