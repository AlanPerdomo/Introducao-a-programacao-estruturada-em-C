//LISTA DE EXERC�CIOS 1

//7.Construa um algoritmo que simule uma calculadora com as seguintes opera��es matem�ticas: 
//	Soma, subtra��o, divis�o, multiplica��o e potencia��o.
//  O usu�rio da calculadora dever� entrar sempre com dois valores, 
//  em seguida o usu�rio dever� escolher a opera��o a ser efetuada para os valores que foram digitados
//  e o programa dever� apresentar: os n�meros digitados, a opera��o escolhida e o resultado da opera��o.
//  (sem while)

#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float x,y,resultado;
	string z;
	
	cout<<"valor 1 - ";cin>>x;
	cout<<"operador - ";cin>>z;
	cout<<"valor 2 - ";cin>>y;
	
	//soma
	if(z== "+"){
		resultado=x+y;
	}	
	//subtra��o
	if(z== "-"){
		resultado=x-y;
	}	
	//divis�o
	if(z== "/"){
		resultado=x/y;
	}	
	//multiplica��o
	if(z== "*"){
		resultado=x*y;
	}	
	//potencia��o
	if(z== "^"){
		resultado= pow(x,y);
	}		
	cout<<x<<z<<y<<"="<<resultado;
	}
	
	

