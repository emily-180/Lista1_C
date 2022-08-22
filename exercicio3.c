//Dado um vetor de n números reais, crie uma função que retorne o menor elemento do vetor, 
//apresente o vetor.
#include <stdio.h>
int main(){
	int i, n, vet[100];
	float x, menor;
	printf("Digite a quantidade de elementos: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %d° valor: ", i);
		scanf("%f", &x);
		vet[i]=x;
	}
	menor = vet[0];
	for(i=0;i<n;i++)
		if(vet[i]<menor)
			menor = vet[i];
	
	printf("Menor: %.1f\n", menor);		
	for(i=0;i<n;i++)
		printf(" %d | ", vet[i]);
}
