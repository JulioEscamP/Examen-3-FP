#include <iostream>
using namespace std;
int main(){
    int N;//"N"= se usa para detener el programa si el usuario ingresa "0", esto para q el usuario haga las operaciones cuantas veces quiera
    int ht,he;//"ht"= horas trabajadas; "he"= horas extras.
    float st,sr;//"st"= Salario total; "sr"= Salario real.
cout<<"Calculadora de Salario mensual de empleados"<<endl<<endl;

while (N >0){
    cout<<"Ingrese el numero de horas trabajadas"<<endl;
        cin>>ht;
    cout<<"Ingrese el numero de horas extras"<<endl;
        cin>>he;
st=(1.75*ht);//Usando el numero de horas trabajadas, se multiplica por el valor monetario para sacar el salario total.
sr= 2.50*he+st;// Se calcula el salario real sumando la remuneracion de horas extras(valor monetario de las horas extras multiplicado por las horas extras)por el valor del salario total
    cout<<"Salario total(sin horas extra): "<<st<<endl<<"Salario real(con horas extras): "<<sr<<endl<<endl;
    cout<<"Ingrese el numero 0 para detener el programa."<<endl<<endl;
    cout<<"Ingrese el numero 1 para ingresar mas datos."<<endl;
        cin>>N;
}
return 0;
}
