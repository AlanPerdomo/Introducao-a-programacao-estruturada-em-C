// Lista de exercicios 1

// 6. Fa�a um programa que leia 5 valores alfanum�ricos e ordene-os. Fa�a a depura��o.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	string valor[5],temp;
	int i,y;
	
	for(i=0;i<5;i++){
		cout<<i+1<<"� valor.";cin>>valor[i];
	}	
	for(i=0;i<5;i++){
		for(y=0;y<4;y++){
			if(valor[i]<valor[y]){
			temp=valor[i];
			valor[i]=valor[y];
			valor[y]=temp;
			}
		}
	}
	cout<<valor[0]<<" - "<<valor[1]<<" - "<<valor[2]<<" - "<<valor[3]<<" - "<<valor[4];	
}
