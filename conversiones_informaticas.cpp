#include <iostream>
using namespace std;

float bitsABytes(float bits);
float kilobytesABytes(float kb);
float megabytesAKilobytes(float mb);
float gigabytesAMegabytes(float gb);

int main(){
    int opcion;
    float cantidad;
       for (int i = 0; i >=0; i++) { 
        cout << "Introduzca una opcion:\n\n1) Convertir de Bits a Bytes.\n2) Convertir de Kilobytes a Bytes.\n3) Convertir de Megabytes a Kilobytes.\n4) Convertir de Gigabytes a Megabytes.\n5)Salir.\nOpcion:";
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "Ingrese los Bits: ";
                cin >> cantidad;
                cout << bitsABytes(cantidad)<< " Bytes\n";
                break;
            case 2: 
                cout << "Ingrese los Kilobytes: ";
                cin >> cantidad;
                cout <<kilobytesABytes(cantidad) << " Bytes\n";
                break;
            case 3:
            cout << "Ingrese los Megabytes: ";
                cin >> cantidad;
                cout << megabytesAKilobytes(cantidad) << " Kilobytes\n";
                break;
            case 4:
                cout << "Ingrese los Gigabytes: ";
                cin >> cantidad;
                cout << gigabytesAMegabytes(cantidad) << " Megabytes\n";
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

float bitsABytes(float bits){
	float bytes;
	bytes=bits/8;
	return bytes;
}
float kilobytesABytes(float kb){
	float bytes;
	bytes=kb*1024;
	return bytes;
}
float megabytesAKilobytes(float mb){
	float kb;
	kb=mb*1024;
	return kb;
}
float gigabytesAMegabytes(float gb){
	float mb;
	mb=gb*1024;
	return mb;
}