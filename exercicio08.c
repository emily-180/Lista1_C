//Leia um vetor de caracteres (limite 100) utilizando a função gets(). Utilize a função strlen (Você deve incluir a
//biblioteca string.h) para obter a quantidade de elementos do vetor de caracteres. Escreva o vetor lido em
//ordem inversa.

#include <stdio.h>
#include <string.h>

int main(){
	char vet[100];
	int i, n;
	printf("Entre com uma palavra:");
	gets(vet);
	n=strlen(vet);
	for(i=n; i>=0 ;i--)
		printf("%c ", vet[i]);
}
