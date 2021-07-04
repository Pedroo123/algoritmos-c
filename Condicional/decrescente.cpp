#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1 = 0, num2 = 0, num3 = 0;
	
	printf("\n Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\n Digite o segundo numero: ");
	scanf("%d", &num2);
	
	printf("\n Digite o terceiro numero: ");
	scanf("%d", &num3);
	
	if (num1 > num2 && num1 > num3 && num2 > num3) {
		printf("Ordem decrescente: %d, %d, %d", num1, num2, num3);
	} else if(num2 > num1 && num2 > num3 && num1 < num3) {
		printf("Ordem decrescente: %d, %d, %d", num2, num1, num3);
	} else if(num3 > num2 && num3 > num1 && num2 > num1) {
		printf("Ordem decrescente: %d, %d, %d", num3, num2, num1);
	}
}