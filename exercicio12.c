#include <stdio.h>
#include "biblioteca.h"

int main(){
	float vet[20], soma=0, maior, menor;
	int i, n=5;
	for(i=0;i<5;i++)
		scanf("%f",&vet[i]);	
	maior = maiorNum(vet, n);
	menor =  menorNum(vet, n);
	for(i=0;i<5;i++)
		if(vet[i] != maior && vet[i] != menor)
			soma+=vet[i];
	printf("Resultdo: %.1f", soma);
}
