// Lista de exercicios

// 22. Faça um programa que receba a idade e o peso de 15 pessoas.
//	   Calcule e mostre as médias dos pesos das pessoas da mesma faixa etária.
//	   As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e maiores que 31 anos.

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float idade[15],peso[15],media[4],faixa_etaria[4],soma_etarias[4];
	
	for(int x=0;x<15;x++){
		cout<<x+1<<"ª pessoa: "<<endl;
		cout<<"Digite a idade da "<<x+1<<"ª pessoa - ";cin>>idade[x];
		cout<<"Digite o peso da "<<x+1<<"ª pessoa - ";cin>>peso[x];
		if(idade[x]<=10){
			faixa_etaria[0]+=1;
			soma_etarias[0]+=peso[x];
		}
		if(idade[x]>10 and idade[x]<=20){
			faixa_etaria[1]+=1;
			soma_etarias[1]+=peso[x];
		}
		if(idade[x]>20 and idade[x]<=30){
			faixa_etaria[2]+=1;
			soma_etarias[2]+=peso[x];
		}
		if(idade[x]>30){
			faixa_etaria[3]+=1;
			soma_etarias[3]+=peso[x];
		}
	}
	cout<<"A media de pesos das pessoas ate 10 anos é "<<soma_etarias[0]/faixa_etaria[0]<<endl;
	cout<<"A media de pesos das pessoas de 11 a 20 anos é "<<soma_etarias[1]/faixa_etaria[1]<<endl;
	cout<<"A media de pesos das pessoas de 21 a 30 anos é "<<soma_etarias[2]/faixa_etaria[2]<<endl;
	cout<<"A media de pesos das pessoas com mais de 30 anos é "<<soma_etarias[3]/faixa_etaria[3]<<endl;
}
