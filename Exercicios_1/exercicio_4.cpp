// Lista de exercicios 1

// 4. Faça um programa que leia a idade, altura e peso de X pessoas, calcule e mostre:

// 4.1. A quantidade de pessoas com idade superior a 50 anos

// 4.2. A média das alturas das pessoas com idade entre 10 e 20 anos

// 4.3. A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pessoa, idade[255], altura[255], peso[255];
	float velhos=0,jovens=0,soma_alturas=0,magros=0;
	string x;
	
	while(true){
		pessoa+=1;
		cout<<pessoa<<"ª pessoa."<<endl;
		cout<<"Digite a idade da "<<pessoa<<"ª pessoa - ";cin>>idade[pessoa];
		cout<<"Digite a altura da "<<pessoa<<"ª pessoa - ";cin>>altura[pessoa];
		cout<<"Digite o peso da "<<pessoa<<"ª pessoa - ";cin>>peso[pessoa];
		
		if(idade[pessoa]>50){
			velhos+=1;
		}
		if(idade[pessoa]>10 and idade[pessoa]<20){
			jovens+=1;
			soma_alturas+=altura[pessoa];
		}
		if(peso[pessoa]<40){
			magros+=1;
		}
		cout<<"parar? (sim/nao) ";cin>>x;
		if(x=="sim"){
			break;
		}
    }
	cout<<velhos<<" pessoas possuem idade maior que 50 anos."<<endl;
	cout<<"A média das alturas das pessoas com idade entre 10 e 20 anos é "<<(soma_alturas/jovens)<<endl;
	cout<<"A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas é "<<((magros/pessoa)*100)<<"%."<<endl;	
}
