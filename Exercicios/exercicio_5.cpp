// Lista de exercicios 1

// 5. Uma loja utilizou o código V para transações à vista e P para transações à prazo.
//    Faça um programa que leia o código e o valor de X transações, calcule e mostre:

// 5.1. O valor total das compras à vista

// 5.2. O valor total das compras à prazo

// 5.3. O valor total das compras efetuadas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	float valor, vista_total=0,prazo_total=0,valor_total=0;
	string tipo;	
	
	while(true){
		cout<<"Qual o tipo da transação? (V/P) ";cin>>tipo;
		if(tipo == "stop"or"parar"){
			break;
		}
		cout<<"Qual o valor da transação? ";cin>>valor;
		
		if(tipo=="v"or"V"){
			vista_total+=valor;
		}
		
		if(tipo=="p"or"P"){
			prazo_total+=valor;
		}				
	}
	valor_total=vista_total+prazo_total;
	cout<<"O valor total das compras à vista é "<<vista_total<<endl;
	cout<<"O valor total das compras à prazo é "<<prazo_total<<endl;
	cout<<"O valor total das compras efetuadas é "<<valor_total<<endl;
}
