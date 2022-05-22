//Uma empresa de fornecimento de energia el�trica faz a leitura mensal dos medidores de
//consumo.Para cada consumidor s�o digitados os seguintes dados : n�mero do consumidor,
//quantidade de kwh consumidos durante o m�s e o tipo(c�digo) do consumidor(1 -
//    residencial, 2 - comercial, 3 - industrial)
//    Residencial - pre�o em reais por kwh = 0, 3
//    Comercial - pre�o em reais por kwh = 0, 5
//    Industrial - pre�o em reais por kWh = 0, 7
// 
//    Os dados devem ser lidos at� que seja encontrado um consumidor com n�mero 0 (zero).
//    Calcular e imprimir :
// 
//a) O custo total para cada consumidor
//b) O total de consumo para os tr�s tipos de consumidor
//c) Qual categoria consome mais 

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int numeroConsumidor = -1, qtdKwhConsumidos, codigoConsumidor;
    float custoTotalResidencial = 0, custoTotalComercial = 0, custoTotalIndustrial = 0;
    float consumoTotalResidencial = 0, consumoTotalComercial = 0, consumoTotalIndustrial = 0;
    string categoriaMaiorConsumo;

    while (numeroConsumidor != 0) {
        cout << "\n\nInforme o n�mero do consumidor: ";
        cin >> numeroConsumidor;
        if (numeroConsumidor != 0) {
            cout << "Informe a quantidade de kwh consumidos durante o m�s: ";
            cin >> qtdKwhConsumidos;

            cout << "Informe o c�digo do consumidor (1 - residencial, 2 - comercial, 3 - industrial): ";
            cin >> codigoConsumidor;

            if (codigoConsumidor == 1) {
                consumoTotalResidencial += qtdKwhConsumidos;
                cout << "Total a pagar R$: " << (qtdKwhConsumidos * 0.3);
            }
            if (codigoConsumidor == 2) {
                consumoTotalComercial += qtdKwhConsumidos;
                cout << "Total a pagar R$: " << (qtdKwhConsumidos * 0.5);
            }
            if (codigoConsumidor == 3) {
                consumoTotalIndustrial += qtdKwhConsumidos;
                cout << "Total a pagar R$: " << (qtdKwhConsumidos * 0.7);
            }
            
        }
    }

    if (consumoTotalResidencial > consumoTotalComercial && consumoTotalResidencial > consumoTotalIndustrial) {
        categoriaMaiorConsumo = "Residencial";
    }
    else if (consumoTotalComercial > consumoTotalResidencial && consumoTotalComercial > consumoTotalIndustrial) {
        categoriaMaiorConsumo = "Comercial";
    }
    else if (consumoTotalIndustrial > consumoTotalResidencial && consumoTotalIndustrial > consumoTotalComercial) {
        categoriaMaiorConsumo = "Industrial";
    }


    cout << "\n| Total de consumo kwh: ";
    cout << "\nResidencial: " << consumoTotalResidencial;
    cout << "\nComercial: " << consumoTotalComercial;
    cout << "\nIndustrial: " << consumoTotalIndustrial;

    cout << "\n| A categoria com maior consumo: " << categoriaMaiorConsumo;
}