// Lista de exercicios 1

// 1. Desenvolver um algoritmo que leia um n�mero inteiro e 
//    verifique se o n�mero � divis�vel por 5 e por 3 ao mesmo tempo.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	cout << "Digite um n�mero - "; cin>>num;
	
	if(num % 3 == 0 and num % 5 == 0){
		cout<< "O n�mero "<< num << " � divisivel por 3 e 5. " << endl;
	}
	else{
		cout<< "O n�mero "<< num << " n�o � divisivel por 3 e 5. " << endl;
	}
}
