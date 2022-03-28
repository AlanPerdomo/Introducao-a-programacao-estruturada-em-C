// Lista de exercicios 1

// 1. Desenvolver um algoritmo que leia um número inteiro e 
//    verifique se o número é divisível por 5 e por 3 ao mesmo tempo.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um número - "; cin>>num;
	
	if(num % 3 == 0 and num % 5 == 0){
		cout<< "O número "<< num << " é divisivel por 3 e 5. " << endl;
	}
	else{
		cout<< "O número "<< num << " não é divisivel por 3 e 5. " << endl;
	}
}
