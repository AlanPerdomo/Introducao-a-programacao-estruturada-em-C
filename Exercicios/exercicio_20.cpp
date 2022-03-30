// Lista de exercicios 1

// 20. Faça um programa que receba um conjunto de valores inteiros e positivos e 
//     que calcule e mostre o maior e o menor valor do conjunto. Considere que:
//     	*Para encerrar a entrada de dados, deve ser digitado o valor zero;
//		*Para valores negativos, deve ser enviada uma mensagem;
//		*Os valores negativos ou iguais a zero não entrarão nos cálculos.

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x,y,i,num,valor[x],valor_temp;
	x=0;
	while(true){
		cout<<"Digite um valor inteiro e positivo ou digite 0 para parar. - ";cin>>num;
		while(num<0){
			cout<<"Digite um valor inteiro e positivo ou digite 0 para parar! - ";cin>>num;
		}
		if(num>0){
			valor[x]=num;
			x++;
		}
		if(num==0){
			break;
		}	
	}
	i=0;
	while(i<x-1){
		y=i+1;
		while(y<x){
			if(valor[i]<valor[y]){
				valor_temp=valor[i];
				valor[i]=valor[y];
				valor[y]=valor_temp;
			}
			y++;
		}
		i++;
	}
	cout<<valor[0]<<" "<<valor[x-1];	
}
