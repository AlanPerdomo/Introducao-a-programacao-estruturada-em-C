//LISTA DE EXERCÍCIOS 1

//7.Construa um algoritmo que simule uma calculadora com as seguintes operações matemáticas: 
//	Soma, subtração, divisão, multiplicação e potenciação.
//  O usuário da calculadora deverá entrar sempre com dois valores, 
//  em seguida o usuário deverá escolher a operação a ser efetuada para os valores que foram digitados
//  e o programa deverá apresentar: os números digitados, a operação escolhida e o resultado da operação.
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
	//subtração
	if(z== "-"){
		resultado=x-y;
	}	
	//divisão
	if(z== "/"){
		resultado=x/y;
	}	
	//multiplicação
	if(z== "*"){
		resultado=x*y;
	}	
	//potenciação
	if(z== "^"){
		resultado= pow(x,y);
	}		
	cout<<x<<z<<y<<"="<<resultado;
	}
	
	

