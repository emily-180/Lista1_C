//Dado um vetor de n números reais, crie uma função que retorne o maior elemento do vetor, 
//apresente o vetor.
#include <stdio.h>
int main(){
	int i, n, vet[100];
	float x, maior;
	printf("Digite a quantidade de elementos: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %d° valor: ", i);
		scanf("%f", &x);
		vet[i]=x;
	}
	maior = vet[0];
	for(i=0;i<n;i++)
		if(vet[i]>maior)
			maior = vet[i];
	
	printf("Maior: %.1f\n", maior);		
	for(i=0;i<n;i++)
		printf(" %d | ", vet[i]);
}
