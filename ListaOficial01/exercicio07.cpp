//Escreva um algoritmo que determine o n�mero de dias que uma pessoa j� viveu. Para isso o
//usu�rio dever� informar apenas a sua data de nascimento. Considere que cada m�s tenha
//30 dias e o ano tenha 360 dias.
#include <iostream>
using namespace std;

//functions
void exibeTitulo(string titulo);
void verificaAno(int &anoNascimento);

int main(){
	setlocale(LC_ALL, "Portuguese");
	exibeTitulo("Exerc�cio 07 - Idade em Dias");
		
	int diaNascimento, mesNascimento, anoNascimento, idade, idadeEmDias, mesesEmDias, diasVividos;
	int diaAtual = 12, mesAtual = 3, anoAtual = 2022;
	bool jaFezAniversarioEsseAno = false;
			
	cout << "Dia do  nascimento (DD): ";
	cin >> diaNascimento;
	cout << "M�s do seu nascimento (MM): ";
	cin >> mesNascimento;
	cout << "Ano do seu nascimento (AAAA): ";
	cin >> anoNascimento;
	
	if(diaAtual >= diaNascimento && mesAtual >= mesNascimento){
		jaFezAniversarioEsseAno = true;
	} else {
		jaFezAniversarioEsseAno = false;
	}	
	
	if(jaFezAniversarioEsseAno){
		idade = anoAtual - anoNascimento;
	} else {
		idade = (anoAtual-anoNascimento)-1;
	}
	
	idadeEmDias = idade*360;	
	mesesEmDias = mesAtual*30;
	
	diasVividos =  diaAtual + idadeEmDias + mesesEmDias; 
	
	cout << "Voc� j� viveu "<< diasVividos << " dias!";	
			
}
//functions
void exibeTitulo(string titulo){
	cout <<"\t" << titulo <<"\n\n";
}
