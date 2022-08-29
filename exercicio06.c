//Escreve um programa que sorteio, aleatoriamente, N números e armazene estes em um vetor. Em seguida, o
//usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se
//estiver, diga a posição que está.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int i, n, vet[100], pos, num, verdade=0;
	printf("Quantidade de elementos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	printVet(vet, n);
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=0; i<n; i++)
		if(vet[i]== num){
			pos=i;
			verdade=1;
		}
	if(verdade == 1)
		printf("Este numero esta!! Se encontra na posicao %d\n", pos);
	else
		printf("Este numero nao esta!! ");
}

