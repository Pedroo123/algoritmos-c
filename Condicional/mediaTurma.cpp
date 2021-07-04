#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numeroAlunos = 0;
	float nota1 = 0, nota2 = 0, nota3 = 0;
	float mediaAluno = 0, mediaTurma = 0;
	float total = 0;
	
	printf("Insira o numero de alunos na turma: ");
	scanf("%f", &numeroAlunos);
	
	for (int i = 0; i <= numeroAlunos; i++) {
		printf("Insira a primeira nota: ");
		scanf("%f", &nota1);
		
		printf("Insira a segunda nota: ");
		scanf("%f", &nota2);
		
		printf("Insira a terceira nota: ");
		scanf("%f", &nota3);
		
		mediaAluno = (nota1 + nota2 + nota3) / 3;
		total += (nota1 + nota2 + nota3);
	}
	
	mediaTurma = total / numeroAlunos;
	
	printf("Media da turma: %f", mediaTurma);
}