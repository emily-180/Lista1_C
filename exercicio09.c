//Receber um vetor de N posi��es do tipo inteiro verificar quantas vezes um dado valor informado pelo usu�rio
//se encontra no vetor. Apresente tamb�m todos elementos do vetor.
#include <stdio.h>
#include "biblioteca.h"

int main(){
	int i, n, vet[100], num, quant=0;
	printf("Quantidade de elementos: ");
	scanf("%d", &n);
	geraVet(vet, n);
	printVet(vet, n);
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(i=0; i<n; i++)
		if(vet[i]== num){
			quant++;
		}
	printf("Repetiu %d vezes", quant);
}

