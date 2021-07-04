#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numero = 0;
	
	printf("---- verificacao de numero ------ \n");
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	if (numero > 0) {
		printf("O numero e positivo");
	} else if (numero == 0) {
		printf("O numero e zero");
	} else {
		printf("O numero e negativo");
	}
	
}