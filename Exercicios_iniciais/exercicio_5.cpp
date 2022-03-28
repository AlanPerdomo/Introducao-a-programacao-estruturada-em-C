//LISTA DE EXERCÍCIOS 1

//5. Uma loja utilizou o código V para transações à vista e P para transações à prazo. 
//	Faça um programa que leia o código e o valor de 5 transações, calcule e mostre:
//		*O valor total das compras à vista.
//		*O valor total das compras à prazo.
//		*O valor total das compras efetuadas.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int x; 
	string tipo[5];
	float valor[5],vista=0,prazo=0;
	
	for(x=0;x<5;x++){
		cout<<x+1<<"ª transação."<<endl;
		cout<<"Qual o tipo da transação? ";cin>>tipo[x];
		cout<<"Qual o valor da transação? ";cin>>valor[x];
		
		if(tipo[x] == "v" or tipo[x] == "V"){
			vista += valor[x];
		}
		if(tipo[x] == "p" or tipo[x] == "P"){
			prazo += valor[x];
		}
	}	
	cout<<vista<<" a vista "<<endl;
	cout<<prazo<<" prazo "<<endl;
	cout<<(vista+prazo)<< " Total "<<endl;
}
