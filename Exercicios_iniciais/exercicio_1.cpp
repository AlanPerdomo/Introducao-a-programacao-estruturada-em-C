//LISTA DE EXERC�CIOS 1

//1. Desenvolver um algoritmo que leia um n�mero inteiro e verifique se o n�mero � 
//   divis�vel por 5 e por 3 ao mesmo tempo.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	    
    int x;
        
    cout<<"Digite um n�mero - ";cin>>x;
    
    if(x%3==0 and x%5==0){
    	cout<<"O numero "<<x<<" � divisivel por 3 e 5.";
	}
	else{
		cout<<"O numero "<<x<<" n�o � divisivel por 3 e 5.";
	}	
}
