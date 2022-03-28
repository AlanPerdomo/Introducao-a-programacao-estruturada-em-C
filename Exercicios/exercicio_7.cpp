// Lista de exercicios 1

// 7. Faça um algoritmo para ler e imprimir o nome e a idade de várias pessoas, 
//    até encontrar alguém com 65 anos, quando deverá ser impresso, além do nome e
//    da idade, uma mensagem informando o fato.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	string nome[256],repetir;
	int idade[256],total_pessoas=1,i=0;
	bool fato[256];
	
	while(true){
		cout<<"Digite o "<<total_pessoas<<"º nome. - ";cin>>nome[i];
		cout<<"Digite a idade de "<<nome[i]<<" - ";cin>>idade[i];
		if(idade[i]==65){
			fato[i]=true;
		}
		else{
			fato[i]=false;
		}
		cout<<"deseja adicionar mais uma pessoa? (y/n) ";cin>>repetir;
		if(repetir=="n"){
			break;
		}
		if(repetir!= "y"and"n"){
			cout<<"deseja adicionar mais uma pessoa? (y/n) ";cin>>repetir;
		}
		total_pessoas+=1;
		i+=1;		
	}	
	for(i=0;i<total_pessoas;i++){
		cout<<nome[i]<<" "<<idade[i];
		if(fato[i]){
			cout<<" esta pessoa possui 65 anos. "<<endl;
		}
		else{
			cout<<endl;
		}
	}
}
