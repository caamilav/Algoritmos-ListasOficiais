//Construa um algoritmo que leia o nome, o sexo e o sal�rio de v�rios funcion�rios de uma
//empresa.Ao final, o algoritmo deve apresentar qual sexo possui a maior m�dia salarial.Para
//definir o sexo utilize a legenda : �M� para masculino, �F� para feminino e �X� para encerrar a
//leitura dos dados.
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    string nome, sexo;
    float salario;
    int contadorM = 0, contadorF = 0;
    float somadorM = 0, somadorF = 0;
    float mediaSalarialM, mediaSalarialF;

    while (sexo != "X") {
        cout << "Informe o sexo, 'M' (masculino) 'F' (feminino) ou 'X' para encerrar: ";
        cin >> sexo;

        if (sexo != "X") {
            cout << "Informe o nome: ";
            cin >> nome;
            cout << "Informe o sal�rio: ";
            cin >> salario;

            if (sexo == "M") {
                somadorM += salario;
                contadorM++;
            }
            else if (sexo == "F") {
                somadorF += salario;
                contadorF++;
            }

        }
    }

    mediaSalarialM = somadorM / contadorM;
    mediaSalarialF = somadorF / contadorF;

    if (mediaSalarialM > mediaSalarialF) {
        cout << "\nO sexo masculino possu� a maior m�dia sal�rial";
        cout << "\nM�dia sal�rial do sexo masculino: " << mediaSalarialM;
        cout << "\nM�dia sal�rial do sexo feminino: " << mediaSalarialF;

    }
    else {
        cout << "\nO sexo feminino possu� a maior m�dia sal�rial";
        cout << "\nM�dia sal�rial do sexo feminino: " << mediaSalarialF;
        cout << "\nM�dia sal�rial do sexo masculino: " << mediaSalarialM;
    }
    


}