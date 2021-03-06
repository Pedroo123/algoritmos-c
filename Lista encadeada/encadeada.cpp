#include <stdio.h>
#include <stdlib.h>

//Declaração da struct
typedef struct nodes {
	int n;
	struct nodes * proximo;
} strNode;

//aloca espaço para o nó
node alocaEspaco() {

	node novoNo = (node)malloc(sizeof(node));

	return novoNo;
}

int main() {

	int resp;

	//Declara inicio e fim da lista
	strNode * iniNode;
	strNode * proxNode;

	//Chama função para alocar espaço
	iniNode = alocaEspaco();


	//verifica se o primeiro no não é vazio, caso seja, encerra a execução.
	if (iniNode == NULL) {
		exit(1);
	}

	proxNode = iniNode;

	while(1) {

		printf("Digite o numero: ");
		scanf("%d", &proxNode->n);

		printf("Deseja Continuar? <1> SIM <OUTRO> NAO: ");
		scanf("5d", &resp);

		if(resp == 1) {
			proxNode->proximo = (strNode *)malloc(sizeof(strNode));
			proxNode = proxNode->proximo;
		} else
			break;
	}

	//Declaram fim da lista
	proxNode->proximo = NULL;

	proxNode = iniNode;

	while(proxNode != NULL) {
		printf("n: %d", proxNode->n);
		proxNode = proxNode->proximo;
	}

	return 0;
}
