//LISTA DE EXERC�CIOS 1

//6. Fa�a um programa que leia 5 valores alfanum�ricos e ordene-os. Fa�a a depura��o.

#include <iostream>
#include <locale.h>

using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");

	int x=1,y=2;
	string valor[6],z;
	
	for(x=1;x<6;x++){
		cout<<"Digite o "<<x<<"� valor - ";cin>>valor[x];
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
