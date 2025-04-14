#include <iostream>
using namespace std;

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);

int main(){
    int opcion;
    int a, b;
       for (int i = 0; i >=0; i++) { 
        cout << "Introduzca una opcion:\n\n1) Sumar dos numeros.\n2) Restar dos numeros.\n3) Multiplicar dos numeros.\n4) Dividir dos numeros.\n5)Salir.\nOpcion:";
        cin >> opcion;
        switch(opcion){
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
	cout<<sumar(a,b)<<"\n";
                break;
            case 2: 
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
	cout<<restar(a,b)<<"\n";
                break;
            case 3:
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
	cout<<multiplicar(a,b);
                break;
            case 4:
                cout << "Ingrese el primer numero: ";
                cin >> a;
                cout << "Ingrese el segundo numero: ";
                cin >> b;
	cout<<dividir(a,b)<<"\n";
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

int sumar(int a, int b){
	int suma;
	suma=a+b;
	return suma;
}
int restar(int a, int b){
	int resta;
	resta=a-b;
	return resta;
}
int multiplicar(int a, int b){
	int multiplicacion;
	multiplicacion=a*b;
	return multiplicacion;
}
float dividir(int a, int b){
	float division;
	if (b==0){
		cout<<"No se puede dividir entre cero.";
	}else {
		division=a/b;
}
	return division;
}