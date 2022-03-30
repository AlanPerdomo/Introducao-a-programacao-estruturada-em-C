// Lista de exercicios

// 21. Faça um programa para calcular n!.

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num,resultado,x;
	cout<<"Digite um valor - ";cin>>num;
	if(num==0){
		cout<<num<<" fatorial é 1."<<endl;
	}
	else{
		x=num-1;
		resultado=num;
		while(x>0){
			resultado=resultado*x;
			x--;
		}
	cout<<"O resultado de "<<num<<" fatorial é "<<resultado<<".";
	}
}
