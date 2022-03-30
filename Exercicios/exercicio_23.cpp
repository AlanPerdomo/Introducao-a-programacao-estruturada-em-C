// Lista de exercicios

// 23. cada espectador de um cinema respondeu a um questionario no qual constava sua idade e sua opiniao 
//	   em relação a um filme: otimo - 3, bom - 2, regular - 1. faça m programa que receba a idade e a
// 	   opiniao de 15 espectadores e que calcule e mostre:
//		*A media das idades das pessoas que responderam ótimo;
//		*A quantidade de pessoas que respondeu regular;
//		*A percentagem de pessoas qeu respondeu bom entre todos os espectadores analisados

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float t_nota[3],idade_nota[3],nota_individual[15],idade[15];
	
	for(int i=0;i<15;i++){
		cout<<i+1<<"ª pessoa:"<<endl;
		cout<<"idade - ";cin>>idade[i];
		cout<<"diga sua opiniao 1(regular), 2(bom), 3(ótimo) - ";cin>>nota_individual[i];
		if(nota_individual[i]==1){
			t_nota[0]++;
			idade_nota[0]+=idade[i];
		}
		if(nota_individual[i]==2){
			t_nota[1]++;
			idade_nota[1]+=idade[i];
		}
		if(nota_individual[i]==3){
			t_nota[2]++;
			idade_nota[2]+=idade[i];
		}		
	}
	cout<<"A média das idades das pessoas que responderam ótimo é "<<idade_nota[2]/t_nota[2]<<endl;
	cout<<"A quantidade de pessoas que respondeu regular é "<<t_nota[0]<<endl;
	cout<<"A percentagem de pessoas que respondeu 'bom' entre todos os espectadores é "<<(t_nota[1]/15)*100<<"%.";
}
