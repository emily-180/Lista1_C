//Escreva um programa que leia ou gere um vetor de N elementos inteiros. A seguir, crie uma função que receba
//esse vetor e conte quantos valores impares existem no vetor. Retorne a quantidade de impares.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int n, vet[100], res;
	printf("Quantidade de elementos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	res = quantImpar(vet, n);
	printVet(vet, n);
	printf("Quantidade de numero impares no vetor: %d", res);
}

