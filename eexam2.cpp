#include <iostream>
using namespace std;
int main(){
    int n,i=5;//La variable "n" representa en ingreso del numero que se tiene que adivinar.
    //"i" representa el numero de iteraciones que el programa debe de hacer antes de cerrarse.
cout<<"Programa en donde tienes que adivinar <<EL NUMERO MAGICO>> :)"<<endl<<endl;
cout<<"Elija un numero entero entre el 1 y 100 y digitelo"<<endl;
cout<<"Tiene 5 intentos :)"<<endl;
do{//Se pedira el ingreso del numero "n", este valor luego se evaluara dentro de los if
cin>>n;
if (n==7){//7 es la respuesta correcta, si se ingresa 7 se le notifica al usuario que gano y se cierra el programa.
cout<<"¡FELICIDADES ADIVINASTE EL NUMERO!";
break;
}
else if(n>100){//Las reglas especifican que el numero esta entre 1 y 100, si el usuario ingresa un numero mayor que 100 se anula el turno y se cierra el programa.
        cout<<"Su numero es mayor que 100, juego anulado";
        break;
}
else if(n<1){//Las reglas especifican que el numero esta entre 1 y 100, si el usuario ingresa un numero menor que 1 se anula el turno y se cierra el programa.
        cout<<"Su numero es menor que 1,juego anulado";
        break;
}
else if(n<7){//Si el numero es menor que 7 se le notifica al usuario y se despliega el numero de intentos
    cout<<"Su numero es menor que EL NUMERO MAGICO";
    cout<<" Tienes "<<i<<" intentos restantes"<<endl;
}
else if(n>7){//Si el numero es mayor que 7 se le notifica al usuario y se despliega el numero de intentos
    cout<<"Su numero es mayor que EL NUMERO MAGICO";
    cout<<" Tienes "<<i<<" intentos restantes"<<endl;
}
else if(i<=0){// cuando el numero de intentos(iteraciones) llega a 0 se cierra el programa
        break;
}
} while (i--);// Esta while especifica que el numero de intentos (5) va a ir decrasiendo
return 0;
}

