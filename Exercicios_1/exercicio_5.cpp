// Lista de exercicios 1

// 5. Uma loja utilizou o c�digo V para transa��es � vista e P para transa��es � prazo.
//    Fa�a um programa que leia o c�digo e o valor de X transa��es, calcule e mostre:

// 5.1. O valor total das compras � vista

// 5.2. O valor total das compras � prazo

// 5.3. O valor total das compras efetuadas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float valor, vista_total=0,prazo_total=0,valor_total=0;
	string tipo;	
	
	while(true){
		cout<<"Qual o tipo da transa��o? (V/P) ";cin>>tipo;
		if(tipo == "stop"or"parar"){
			break;
		}
		cout<<"Qual o valor da transa��o? ";cin>>valor;
		
		if(tipo=="v"or"V"){
			vista_total+=valor;
		}
		
		if(tipo=="p"or"P"){
			prazo_total+=valor;
		}				
	}
	valor_total=vista_total+prazo_total;
	cout<<"O valor total das compras � vista � "<<vista_total<<endl;
	cout<<"O valor total das compras � prazo � "<<prazo_total<<endl;
	cout<<"O valor total das compras efetuadas � "<<valor_total<<endl;
}
