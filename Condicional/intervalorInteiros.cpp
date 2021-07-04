#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num2 = 0;
	int i = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &i);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	while(i < num2){
		printf("%d", i++); 
	}
}