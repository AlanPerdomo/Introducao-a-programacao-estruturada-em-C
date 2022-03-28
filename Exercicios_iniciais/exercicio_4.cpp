//LISTA DE EXERCÍCIOS 1

//4.Faça um programa que leia a idade, altura e peso de 5 pessoas, calcule e mostre:
//		*A quantidade de pessoas com idade superior a 50 anos.
//		*A média das alturas das pessoas com idade entre 10 e 20 anos.
//		*A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
    
	int x;
	x=5;

    int idade[x],i;
    float altura[x], peso[x], velhos=0, s=0, d=0, magrelos=0;
    //s= soma das alturas das pessoas entre 10 e 20 anos.
	//d= quantidade de pessoas entre 10 e 20 anos.
    
	for(i=1;i<x+1;i++){
		cout<<i<<"ª pessoa."<<endl;
		cout<<"Digite a idade da "<<i<<"ª pessoa - "; cin>>idade[i];
		cout<<"Digite a altura da "<<i<<"ª pessoa - "; cin>>altura[i];
		cout<<"Digite o peso da "<<i<<"ª pessoa - "; cin>>peso[i];
		cout<<endl;
		
		if(idade[i]>50){
			velhos+=1;
		}		
		if(idade[i]>=10 and idade[i]<=20){
			s+=altura[i];
			d+=1;
		}
		if(peso[i]<40){
			magrelos+=1;
		}
	}
		
	cout<<velhos<<" pessoas possuem idade superior a 50 anos."<<endl;
	cout<<"A média das alturas das pessoas com idade entre 10 e 20 anos é "<<(s/d)<<"."<<endl;
	cout<<(magrelos/x)*100<<"% das pessoas possuem peso inferior a 40 quilos."<<endl;
	}
