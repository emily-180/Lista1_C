//Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usuário
//e o limite do vetor é 100) e passe o mesmo como parâmetro para uma função que retorne a soma de seus elementos.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int n, vet[100], res;
	printf("Quantidade de elementos: ");
	scanf("%d", &n);
	if(n <= 100){
		geraVet(vet, n);
		printVet(vet , n);
		res = somaVet(vet, n);
		printf("Soma: %d ", res);
	}		
	else
		printf("Quantidade deve ser menor que 100!");		
	return 0;
}

