//LISTA DE EXERCÍCIOS 1

//1. Desenvolver um algoritmo que leia um número inteiro e verifique se o número é 
//   divisível por 5 e por 3 ao mesmo tempo.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	    
    int x;
        
    cout<<"Digite um número - ";cin>>x;
    
    if(x%3==0 and x%5==0){
    	cout<<"O numero "<<x<<" é divisivel por 3 e 5.";
	}
	else{
		cout<<"O numero "<<x<<" não é divisivel por 3 e 5.";
	}	
}
