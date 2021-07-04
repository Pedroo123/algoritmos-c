#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num1 = 0, num2 = 0;
	int result1 = 0, result2 = 0, result3 = 0, result4 = 0;
	
	printf("---- 4 operacoes ------\n");
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	//Operacoes
	result1 = num1 + num2;
	result2 = num1 - num2;
	result3 = num1 / num2;
	result4 = num1 * num2;

	printf("\n Resultado da adicao dos numeros: %d", result1);
	printf("\n Resultado da subtracao dos numeros: %d", result2);
	printf("\n Resultado da divisao dos numeros: %d", result3);
	printf("\n Resultado da multiplicacao dos numeros: %d", result4);
}