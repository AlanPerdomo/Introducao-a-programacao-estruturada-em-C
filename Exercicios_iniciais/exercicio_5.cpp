//LISTA DE EXERC�CIOS 1

//5. Uma loja utilizou o c�digo V para transa��es � vista e P para transa��es � prazo. 
//	Fa�a um programa que leia o c�digo e o valor de 5 transa��es, calcule e mostre:
//		*O valor total das compras � vista.
//		*O valor total das compras � prazo.
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
		cout<<x+1<<"� transa��o."<<endl;
		cout<<"Qual o tipo da transa��o? ";cin>>tipo[x];
		cout<<"Qual o valor da transa��o? ";cin>>valor[x];
		
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
