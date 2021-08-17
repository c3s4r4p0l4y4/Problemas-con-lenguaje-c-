//Esta es una calculadora basica con funciones para principiantes de C++

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	cout<<"------------Calculadora-----------";
	
	float a,b,opcion=0;
	
	cout<<"\nAhi estan las demas operaciones";
	cout<<"\nDijite el valor de a: "; cin>>a;
	cout<<"Dijite el valor de b: "; cin>>b;
	
	cout<<"1) Sumar";
	cout<<"\n2) Restar";
	cout<<"\n3) Multiplicar";
	cout<<"\n4) Dividir";
	cout<<"\nDijite una opcion: ";
	cin>>opcion;
	
	if(opcion==1){
		cout<<a+b;
	}else if(opcion==2){
		cout<<a-b;
	}else if(opcion==3){
		cout<<a*b;
	}else{
		cout<<a/b;
	}

	return 0;
	
}
