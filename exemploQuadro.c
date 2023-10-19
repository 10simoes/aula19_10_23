#include<stdio.h>

int somarvalores(int vetor[],int n){
	int soma = 0;
	for(int i = 0;i < n;i++){
		soma += vetor[i];
		
	}
	return soma;
}
int somaVal(int vetor[5]){
}

main(){
	int v[5] = {1,3,4,5,7}, res;
	int TAM = 5;
	res=soma(v,TAM);
	
	res=somaVal(v);
	}
