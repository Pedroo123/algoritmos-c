#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float salarioBruto = 0;
	
	printf("---- Salario ------ \n ");
	
	printf("Informe seu salario bruto: ");
	scanf("%f", &salarioBruto);
	
	float IR = salarioBruto * 0.15;
	float inss = salarioBruto * 0.11;
	float sindicato = salarioBruto * 0.3;
	float salarioLiquido = salarioBruto - IR - inss - sindicato;
	
	printf("\n Salario Bruto: %f", salarioBruto);
	printf("\n (-) IR: %f", IR);
	printf("\n (-) INSS: %f", inss);
	printf("\n (-) sindicato: %f", sindicato);
	printf("\n Salario Liquido: %f", salarioLiquido);	
}