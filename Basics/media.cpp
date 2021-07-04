#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, mediaFinal = 0;
	
	printf("----- Media Final ----- \n ");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a terceira nota: ");
	scanf("%f", & nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	
	mediaFinal = (nota1, nota2, nota3, nota4) / 4;
		
	printf("A media final do alundo e de: %f", mediaFinal);
}