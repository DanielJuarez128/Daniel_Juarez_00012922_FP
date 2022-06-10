#include <iostream>
using namespace std;

int main ()
{
    float nota1, nota2, nota3, nota4, nota5, promedio;

    cout << "\n\tCALCULADORA DE PROMEDIO DE 5 NOTAS\n" << endl;
    cout << "Ingresa la primera nota:";
    cin >> nota1;
    cout << "Ingresa la segunda nota:";
    cin >> nota2;
    cout << "Ingresa la tercera nota:";
    cin >> nota3;
    cout << "Ingresa la cuarta nota:";
    cin >> nota4;
    cout << "Ingresa la quinta nota:";
    cin >> nota5;

    promedio = (nota1+nota2+nota3+nota4+nota5)/5;
    cout << "\nTu promedio es de " << promedio << "\n" << endl;

    return 0;
}