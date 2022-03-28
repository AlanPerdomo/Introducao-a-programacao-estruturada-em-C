// Lista de exercicios 1

// 19. Faça um programa que receba várias idades e que calcule e mostre a média das 
//     idades digitadas. Finalize digitando a idade igual a zero.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade=1,soma_i,num_i;
	
	while(idade!=0){
		num_i+=1;
		cout<<"Digite uma idade para adiciona-la a soma ou digite 0 para parar - ";cin>>idade;
		soma_i+= idade;
		}
	cout<<"A media das idades é "<<soma_i/num_i;
}
