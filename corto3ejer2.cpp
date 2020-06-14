#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    int NumAleatorio, NumIntroducido;

    cout<<"Adivina el numero, tienes 5 oportunidades"<<endl;

    srand(time(NULL));

    NumAleatorio = 1+rand()%(101-1);

     for(int i = 1; i <= 5; i++) {
            cout<<"Esta es tu oportunidad numero "<<i<<endl;
            cout<<"Escribe un numero: ";
            cin>>NumIntroducido;
            
            if(NumAleatorio == NumIntroducido) {
                cout<<"Felcicidades adivinaste el numero";

                break;
            
            }else if(NumIntroducido < NumAleatorio) {
                cout<<"Es mayor que "<<NumIntroducido<<endl;

            }else if(NumIntroducido > NumAleatorio) {
                cout<<"Es menor que "<<NumIntroducido<<endl;

            }

            if(i==5) {
                cout<<"lo siento no adivinaste el numero"<<endl;
                cout<<"el numero era: "<<NumAleatorio;
            }
     }    

    return 0;
}