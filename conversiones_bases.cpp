#include <iostream>
using namespace std;

void decimalABinario(int n);
void decimalAOctal(int n);
void decimalAHexadecimal(int n); 

int main()
{
    int opcion;
    int decimal;
       for (int i = 0; i >=0; i++) { 
        cout << "Introduzca una opcion:\n\n1) Convertir de decimal a binario.\n2) Convertir de decimal a octal.\n3) Convertir de decimal a hexadecimal.\n4) Salir.\nOpcion:";
        cin >> opcion;
        switch(opcion){
            case 1:
	cout<<"Ingrese un numero decimal: ";
	cin>>decimal;
	cout<<"Binario: ";
	decimalABinario(decimal);
	cout<<"\n";
                break;
            case 2: 
	cout<<"Ingrese un numero decimal: ";
	cin>>decimal;
	cout<<"Octal: ";
	decimalAOctal(decimal);
	cout<<"\n";
                break;
            case 3:
	cout<<"Ingrese un numero decimal: ";
	cin>>decimal;
	cout<<"Hexadecimal: ";
	decimalAHexadecimal(decimal); 
	cout<<"\n";
                break;
            case 4:
                return 0;
            default:
                cout << "Opcion incorrecta, vuelva a intentarlo.\n";
                break;
        }
    }

    return 0;
}

void decimalABinario(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    int copia = n;
    int potencia = 1;

    while (potencia <= copia / 2) {
        potencia *= 2;
    }

    while (potencia > 0) {
        int digito = copia / potencia;
        cout << digito;
        copia %= potencia;
        potencia /= 2;
    }
}

void decimalAOctal(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    int copia = n;
    int potencia = 1;

    while (potencia <= copia / 8) {
        potencia *= 8;
    }

    while (potencia > 0) {
        int digito = copia / potencia;
        cout << digito;
        copia %= potencia;
        potencia /= 8;
    }
}

void decimalAHexadecimal(int n) {
    if (n == 0) {
        cout << 0;
        return;
    }

    int restos[32];
    int i = 0;

    while (n > 0) {
        restos[i] = n % 16;
        n /= 16;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        if (restos[j] < 10)
            cout << restos[j];
        else
            cout << char(restos[j] - 10 + 'A');
    }
}