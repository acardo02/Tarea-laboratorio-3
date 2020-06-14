#include <iostream>

using namespace std;

float SalarioReal(float n);  // declarando funcion para calcular el salario real 

int main() {

    int CantidadSalarios, HorasNormal, HorasExtra; 

    cout<<"Ingrese cantidad de salarios a calcular: ";
    cin>>CantidadSalarios;

    for(int i = 1; i <= CantidadSalarios; i++) {  // Utilizando un for para pedir la cantidad de salarios 

        cout<<endl<<"Ingrese cantidad de horas trabajadas para el trabajador "<<i<<" : ";
        cin>>HorasNormal; 
        cout<<"Ingrese cantidad de horas extras trabajadas pra el trabajador "<<i<<" : ";
        cin>>HorasExtra;
        cout<<endl;
   
        float total;

        total = (HorasNormal*1.75) + (HorasExtra*2.50); // Formula para calcular el salario total

        cout<<"El salario total del trabajador "<<i<<" es: $"<<total<<endl;
        cout<<"El salario real del trabajador "<<i<<" es: $"<<SalarioReal(total)<<endl;
    }

    return 0;
}

float SalarioReal(float n) {  // Funcion para Calcular el salario real

    float SeguroSocial, AFP, Renta, Real;

    SeguroSocial = n*0.04; // Formulas para calcular los diferentes descuentos 
    AFP = n*0.0625;
    Renta = n*0.10;

    if(n >= 500) {  // utiliznado un if por que los salarios mayores de 500 dolares se les aplica el descuento de renta
        Real = ((n - SeguroSocial) - AFP) - Renta;
    }else {
        Real = (n - SeguroSocial) - AFP;
    }

    return Real;

}

