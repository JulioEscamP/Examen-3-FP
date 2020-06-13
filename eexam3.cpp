#include <iostream>
using namespace std;
int ab(int n);//Esta es la declaracion de la funcion para el año bisiesto.
int n;
int main(){
cout<<"Funcion que calcula si un ano es bisiesto"<<endl<<endl;
cout<<"Ingrese el ano"<<endl;
cin>>n;
cout<<ab(n)<<endl;

}
int ab(int n){

if(n%400==0){//Se hace la primera prueba, si el año es bisiesto es divisible entre 400
    cout<<"El numero es Bisiesto."<<endl;
        return 0;
}
else if(n%4==0&&n%100!=0){//Se hace la segunda prueba, el numero debe ser divisible entre 4 y no debe ser divisible entre 100
        cout<<"El numero es Bisiesto."<<endl;
        return 0;
}
else{
    cout<<"El numero no es bisiesto"<<endl;//Si la prueba 1 y 2 fallan, el año no es bisiesto.
        return 0;
    }
}
