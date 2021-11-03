#include <stdio.h>
#inclue <stdlib.h>


/* Declara struct */
struct noPilha {
	int dado;
	struct noPilha *proxPtr;
};

typeDef struct noPilha NoPilha;
typeDef NoPilha *NoPilha; /* Ponteiro do tipo NoPilha */

/* Declaracao das funcoes */
void push( NoPilha *ptrTopo, int info);
int pop( NoPilha *ptrTopo);
int isEmpty( NoPilha ptrTopo);
void imprimePilha( NoPilha ptrAtual);
void instructions();


int main() {
	
	NoPilha ptrStack = NULL;
	int choice;
	int value;
	
	/*Exibe o menu*/
	instructions();
	scanf("%d", &choice);
	
	while (choice != 4 ) {
		
		switch (choice) {
			case 1:
				printf("Digite um inteiro: ");
				scanf("%d", &value);
				push(&ptrStack, value);
				imprimePilha(ptrStack);
				break;
			case 2:
				if (!isEmpty(ptrStack)) {
					printf("O valor retirado foi %d. \n", pop(&ptrStack));
				}
				imprimePilha(ptrStack);
				break;
			default:
				printf("Escolha invalida! \n\n");
				instructions();
				break;
		}
		
		printf("?");
		scanf("%d", &choice);
	}
	
	printf("Fim da execucao");
	return 0;
}

void instructions() {
	
	printf ("Digite um numero: 	\n"
	"1 - para colocar um valor na pilha \n"
	"2 - para retirar um valor da pilha \n"
	"3 - Para terminar o programa \n");
}

void push( NoPilha *ptrTopo, int info) {
	
	NoPilha novoPtr;
	
	novoPtr = malloc(sizeof(NoPilha));
	
	if (novoPtr != NULL) {
		novoPtr->dado = info;
		novoPtr->proxPtr = *ptrTopo;
		*ptrTopo = novoPtr;
	}
	else {
		printf("Nao existe espaco para inserir o no", info);
	}
}

int pop( NoPilha *ptrTopo) {
	
	NoPilha tempPtr;
	int popValue;
	
	tempPtr = *ptrTopo;
	popValue = (*ptrTopo)->dado;
	*ptrTopo = (*ptrTopo)->proxPtr;
	free(tempPtr);
	
	return popValue;
	
}

void imprimePilha(NoPilha ptrAtual) {
	
	if (ptrAtual == NULL) {
		printf("A pilha esta vazia \n\n");
	} else {
		printf("A pilha e: \n";)
		
		while( ptrAtual != NULL) {
			printf("%d --> ", ptrAtual->dado);
			ptrAtual = ptrAtual->proxPtr;
		}
		
		printf("NULL\n\n");
	}	
}

int isEmpty(NoPilha ptrTopo) {
	return ptrTopo == NULL;
}
