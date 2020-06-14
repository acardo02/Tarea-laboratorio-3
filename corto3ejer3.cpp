#include <iostream>

using namespace std;

int prueba1(int n); //declarando funciones para comprobar si es bisiesto
int prueba2(int n);
int main() {

    int n;

    cout<<"Ingrese el a\244o para determinar si es bisiesto: "; //se utiliza \244 para poner la n
    cin>>n;
    if(prueba1(n)== 0) {
        cout<<"El a\244o "<<n<<" es bisiesto";
    }else if(prueba2(n)== 0) {
        cout<<"El a\244o "<<n<<" es bisiesto";
    }else{
        cout<<"El a\244o "<<n<<" no es bisiesto";
    }

    return 0;
}

int prueba1(int n) {     //funcion de la prueba uno si el residuo da cero es por que es divisible

    int prueba;

    prueba = n % 400;
   
   return prueba;
}

int prueba2(int n) {        //funcion de la prueba 2

    int prueba;

    prueba = n % 4;

    return prueba;
}