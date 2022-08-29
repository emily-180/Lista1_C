//Escreva um programa que leia ou gere dois vetores de N posições e faça a multiplicação dos elementos de
//mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int vet[100], vet2[100], result[100], i, res, n;
	printf("Quantidade de elementos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	geraVet(vet2, n);
	printVet(vet, n);
	printVet(vet2, n);
	for(i=0; i<n; i++)
		result[i] = vet[i] * vet2[i];
	printVet(result, n);
}
