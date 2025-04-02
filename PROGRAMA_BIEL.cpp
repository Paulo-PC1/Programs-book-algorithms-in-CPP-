#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    cout << setprecision(2) << fixed << right;
    float imc, peso, altura;

    cout << "Entre o Peso: "; cin >> peso;
    cin.ignore(80,'\n');

    cout << "Entre a Altura: "; cin >> altura;
    cin.ignore(80, '\n');

    imc = peso / (altura * altura);

    cout << "IMC: " << setw(8) << imc << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar...";
    cin.get();
    return 0;
}

