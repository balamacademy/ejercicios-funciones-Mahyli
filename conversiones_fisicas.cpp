#include <iostream>
using namespace std;

float celsiusAFahrenheit(float);
float fahrenheitACelsius(float);
float metrosAPies(float);
float kilogramosALibras(float);

int main()
{
    int opcion;
    float cantidad;
       for (int i = 0; i >=0; i++) { 
        cout << "Introduzca una opcion:\n\n1) Convertir de celsius a fahrenheit.\n2) Convertir de fahrenheit a celsius.\n3) Convertir de metros a pies.\n4) Convertir de kilogramos a libras.\n5)Salir.\nOpcion:";
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "Ingrese los grados celsius: ";
                cin >> cantidad;
                cout << celsiusAFahrenheit(cantidad) << "\n";
                break;
            case 2: 
                cout << "Ingrese los grados fahrenheit: ";
                cin >> cantidad;
                cout << fahrenheitACelsius(cantidad) << "\n";
                break;
            case 3:
            cout << "Ingrese los metros: ";
                cin >> cantidad;
                cout << metrosAPies(cantidad) << "\n";
                break;
            case 4:
                cout << "Ingrese los kilogramos: ";
                cin >> cantidad;
                cout << kilogramosALibras(cantidad) << "\n";
                break;
            case 5:
                return 0;
            default:
                cout << "Opcion incorrecta, vuelva a intentarlo.\n";
                break;
        }
    }

    return 0;
}

float celsiusAFahrenheit(float c){
    float f;
    f = (c * 1.8) + 32.0;
    return f;
}

float fahrenheitACelsius(float f){
    float c;
    c = (f - 32.0) / 1.8;
    return c;
}

float metrosAPies(float m){
    float p;
    p = m * 3.281;
    return p;
}

float kilogramosALibras(float kg){
    float lb;
    lb = kg * 2.2046;
    return lb;
}