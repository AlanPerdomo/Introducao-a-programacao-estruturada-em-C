//LISTA DE EXERCÍCIOS 1

//6. Faça um programa que leia 5 valores alfanuméricos e ordene-os. Faça a depuração.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");

	int x=1,y=2;
	string valor[6],z;
	
	for(x=1;x<6;x++){
		cout<<"Digite o "<<x<<"º valor - ";cin>>valor[x];
	}
	
	for(x=1;x<6;x++){
		for(y=1;y<6;y++){
			if(valor[x]<valor[y]){
				z=valor[x];
				valor[x]=valor[y];
				valor[y]=z;
			}	
		}
	}
	
	for(x=1;x<6;x++){
		cout<<valor[x]<<endl;
	}
	
	return 0;
	}
