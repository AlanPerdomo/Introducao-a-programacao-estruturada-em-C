// Lista de exercicios 1

// 8. Transforme o exerc�cio 4, substituindo o comando while pelo for.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int pessoa, idade[255], altura[255], peso[255];
	float velhos=0,jovens=0,soma_alturas=0,magros=0;
	string x;
	
	for(pessoa=1;pessoa<pessoa+1;pessoa++){
		cout<<pessoa<<"� pessoa."<<endl;
		cout<<"Digite a idade da "<<pessoa<<"� pessoa - ";cin>>idade[pessoa];
		cout<<"Digite a altura da "<<pessoa<<"� pessoa - ";cin>>altura[pessoa];
		cout<<"Digite o peso da "<<pessoa<<"� pessoa - ";cin>>peso[pessoa];
		
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
	cout<<"A m�dia das alturas das pessoas com idade entre 10 e 20 anos � "<<(soma_alturas/jovens)<<endl;
	cout<<"A percentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas � "<<((magros/pessoa)*100)<<"%."<<endl;	
}
