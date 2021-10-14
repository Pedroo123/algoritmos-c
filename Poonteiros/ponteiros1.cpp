#include <stdio.h>
#include <stdlib.h>
#include <iostream>


//Declaração de função
void inverteValores(int* valor1, int* valor2);

int main() {
	
	//Declaração dos ponteiros
	int numero1 = 105;
	int numero2 = 10;
	int* pointer1 = &numero1;
	int* pointer2= &numero2;
	
	//Chamando a função
	inverteValores(pointer1, pointer2);
	
	//Mostrando no console os valores invertidos
	printf("Valor invertido do primeiro ponteiro: "); 
	std::cout << pointer1;
	
	printf("Valor invertido do segundo ponteiro: ");
	std::cout << pointer2;
}

//Implementação da função
void inverteValores(int* valor1, int* valor2) {
	
	//Passa o valor do ponteiro valor1 para o ponteiro de valor2;
	valor2 = &valor1;
	
	return;
}
