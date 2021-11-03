#include <stdio.h>
#inclue <stdlib.h>


/*Declara a struct*/
struct noFila {
	int dado;
	struct noFila *proxPtr;
};

typedef struct noFila NoFila;
typedef NoFila *ptrNoFila;

/*Declaracao de funcoes*/
void imprimeFila(NoFila ptrAtual);
int isEmpty(NoFila ptrHead);
int dequeue(NoFila *ptrHead, NoFila *ptrTail);
void enfileira(NoFila *ptrHead, NoFila *ptrTail, int value);
void instructions();

int main() {
	
	NoFila ptrHead = NULL; /*Inicia a head da fila*/
	NoFila ptrTail = NULL; /*Inicia a tail da fila*/
	
	int choice;
	int item;
	
	instructions();
	scanf("%d", &choice);
	
	while (choice != 3) {
		
		switch (choice) {
			case 1:
				printf("Digite um numero: \n");
				scanf("%d", &item);
				enfileira(&ptrHead, &ptrTail, item);
				imprimeFila(ptrHead);
				break;
			case 2:
				if(!isEmpty(ptrHead)) {
					item = dequeue(&ptrHead, &ptrTail);
					printf("O numero que saiu foi \n", item);
				}
				imprimeFila(otrHead);
				break;
			default:
				printf("Escolha Invalida! \n\n");
				instructions();
				break;
		}
		
		printf("?");
		scanf("%d", &choice);
	}
	
	printf("Fim da execucao \n");
	return 0;
}

void instructions() {
	
	printf ("Digite um numero: 	\n"
	"1 - para colocar um valor na fila \n"
	"2 - para retirar um valor da fila \n"
	"3 - Para terminar o programa \n");
}

void enfileira(NoFila *ptrHead, NoFila *ptrTail, int value) {
	
	NoFila novoPtr; /*Inicia novo ponteiro para um novo no*/
	
	novoPtr = malloc(sizeof(NoFila));
	
	if(novoPtr != NULL) {
		novoPtr->dado = value;
		novoPtr->proxPtr = NULL;
		
		if( isEmpty(*ptrHead)) {
			*ptrHead = novoPtr;
		} else {
			(*ptrTail)->proxPtr = novoPtr;
		}
		
		*ptrTail = novoPtr;
	} else {
		printf("Nao existe memoria disponivel para inserir o numero! \n", value);
	}
}

int dequeue(NoFila *ptrHead, NoFila *ptrTail) {
	
	int value;
	NoFila *tmpPtr;
	
	value = (*ptrHead)->dado;
	tmpPtr = *ptrHead;
	*ptrHead = (*ptrHead)->proxPtr;
	
	if(*ptrHead == NULL) {
		*ptrTail = NULL;
	}
	
	free(tmpPtr);
	
	return value;
}

int isEmpty(NoFila ptrHead) {
	return ptrHead == NULL;
}

void imprimeFila(NoFila ptrAtual) {
	
	if (ptrAtual == NULL) {
		printf("A fila esta vazia! \n\n");
	} else {
		printf("A fila e \n");
		
		while(ptrAtual != NULL) {
			printf("%d --> ", ptrAtual->dado);
			ptrAtual = ptrAtual->proxPtr;
		}
		
		printf("NULL \n\n");
	}
	
}