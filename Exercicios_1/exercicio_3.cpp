// Lista de exercicios 1

// 3. Fa�a um programa que leia 2 n�mero e mostre os n�meros do intervalo entre eles 

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num,num1,num2;
	
	cout<<"Digite o primeiro n�mero - ";cin>>num1;
	cout<<"Digite o segundo n�mero - ";cin>>num2;
	
	if(num1>num2)
	{
		num=num1;
		num1=num2;
		num2=num;
	}
	
	while (num1<num2-1)
	{
		cout<<num1+1<<" ";
		num1+=1;
	}
}
