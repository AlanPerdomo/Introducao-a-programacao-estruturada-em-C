//LISTA DE EXERC�CIOS 1

//3.Fa�a um programa que leia 2 n�mero e mostre os n�meros do
//	intervalo entre eles.

#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x,n_temp,n1,n2;
	
	cout<<"digite o primeiro numero ";cin>>n1;
	cout<<"digite o segundo numero ";cin>>n2;
	
	if(n1>n2){
		n_temp=n1;
		n1=n2;
		n2=n_temp;
	}
	x=n1+1;
	while(x<n2){
		cout<<x<<" ";
		x+=1;
	}	
}
