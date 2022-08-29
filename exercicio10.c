//Tentando descobrir se um dado era viciado, um dono de cassino honesto o lançou N vezes. Dados os n
//resultados dos lançamentos que devem ser armazenados em um vetor, determinar o número de ocorrências
//de cada face.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int j, i, n, vet[100], num, quant=0;
	printf("Quantidade de lancamentos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	printVet(vet, n);
	for(i=0; i<n; i++){
		num=vet[i];
		for(j=0; j<n; j++)
			if(num== vet[j])
				quant++;
		printf("O numero %d apareceu %d vezes\n", vet[i], quant);
		quant=0;
	}
}
	

