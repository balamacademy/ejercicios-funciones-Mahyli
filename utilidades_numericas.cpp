#include <iostream>
using namespace std;


bool primo(int numero);
int factorial(int numero);
int contarDigitos(int numero);
int sumarDigitos(int numero);
int resultado;

int main() {
    int numero,opcion;
   for (int i = 0; i >=0; i++) { 
    cout<<"Ingresa la opcion que quieras realizar: \n\n 1)Verificar si un numero es primo. \n 2) Calcular el factorial de un numero. \n 3) Contar la cantidad de digitos que tiene un numero. \n 4) Sumar los digitos de un numero. \n Salir. \n Opcion: ";
    cin >> opcion;
    
    switch(opcion){
         case 1:
	cout<<"Ingresa el numero: ";
	cin>>numero;
	cout << "¿Es primo?: " << (primo(numero) ? "Si" : "No")<<"\n";
	break;
          case 2:
	cout<<"Ingresa el numero: ";
	cin>>numero;
	cout<<"El factorial es: "<<factorial(numero)<<"\n";
	break;
          case 3:
	cout<<"Ingresa el numero";
	cin>>numero;
	cout<<"La cantidad de digitos es: "<<contarDigitos(numero)<<"\n";
	break;
          case 4:
	cout<<"Ingresa el numero: ";
	cin>>numero;
	cout<<"La suma de los digitos es: "<<sumarDigitos(numero)<<"\n";
	break;
          case 5:
	return 0;
          default: 
	cout<<"Opcion incorrecta, vuelva a intentarlo.";
	break;
    }
    }
    return 0;
}

bool primo(int numero) {
    int contador = numero - 1;
    while (contador > 1) {
        if (numero % contador == 0) {
            return false;
        }
        contador--;
    }
    return true;
}

int factorial(int numero) {
    int contador = numero;
    int resultado = 1;
    while (contador > 1) {
        resultado = resultado * contador;
        contador--;
    }
    return resultado;
}

int contarDigitos(int numero) {
    int contador = numero;
    int resultado = 0;
    while (contador >= 1) {
        resultado = resultado + 1;
        contador = contador / 10;
    }
    return resultado;
}

int sumarDigitos(int numero) {
    int contador = numero;
    int resultado = 0;
    int residuo = 0;
    while (contador > 0) {
        residuo = contador % 10;
        contador = contador / 10;
        resultado = resultado + residuo;
    }
    return resultado;
}