// Lista de exercicios 1

// 2. Dados quatro números distintos, desenvolver um algoritmo que 
//    determine e imprima a soma dos três menores.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,num[4],num_temp;
	
	for(x=0;x<4;x++)
	{
		cout << "Digite o "<<x+1<<"º valor - ";cin >> num[x];
	}
	
	for(x=0;x<3;x++)
	{
	    if(num[x]>num[x+1])
		{
			num_temp = num[x];
			num[x]=num[x+1];
			num[x+1]=num_temp;
		}
	}	
	cout << "a soma dos três menores numeros é "<< (num[0]+num[1]+num[2])<< endl;
}
