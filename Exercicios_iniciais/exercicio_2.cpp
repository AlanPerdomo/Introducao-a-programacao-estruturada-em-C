//LISTA DE EXERCÍCIOS 1

//2.Dados quatro números distintos, desenvolver um algoritmo que
//	determine e imprima a soma dos três menores.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int i;
	float soma,n1,n2,n3,n4;	
	
	cout<<"Digite o primeiro valor - ";cin>>n1;
	cout<<"Digite o segundo valor - ";cin>>n2;
	cout<<"Digite o terceiro valor - ";cin>>n3;
	cout<<"Digite o quarto valor - ";cin>>n4;
	
	if(n1<n2 or n1<n3 or n1<n4){
		soma+=n1;
	}
	if(n2<n3 or n2<n4 or n2<n1){
		soma+=n2;
	}
	if(n3<n4 or n3<n1 or n3<n2){
		soma+=n3;
	}
	if(n4<n1 or n4<n2 or n4<n3){
		soma+=n4;
	}
	cout<<"A soma dos três menores numeros é "<<soma<<".";
}
