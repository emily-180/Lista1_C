//Escreva um programa que leia ou gere um vetor de N elementos inteiros (N deve ser informado pelo usu�rio
//e o limite do vetor � 100) e passe o mesmo como par�metro para uma fun��o que retorne a soma de seus elementos.
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

