#include <stdio.h>
#include <stdlib.h>

//Declaração da struct
typedef struct nodes {
	int n;
	int z;
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
		scanf("%d", &resp);

		if(resp == 1) {
			proxNode->proximo = (strNode *)malloc(sizeof(strNode));
			proxNode = proxNode->proximo;
		} else
			break;
	}

	//Declara o fim da lista
	proxNode->proximo = NULL;

	proxNode = iniNode;

	while(proxNode != NULL) {
		
		printf("Digite o numero a ser encontrado na lista: ");
		scanf("%d", &proxNode->z);
		
		for(int i = 0; i <= proxNode; i++) {
			if (i == proxNode->z ) {
				printf("O elemento se encontra no enederço: ", &proxNode->z);
			} else {
				printf("O elemento nao pode ser encontrado");
			}
		}
		
		printf("n: %d", proxNode->n);
		proxNode = proxNode->proximo;
	}

	return 0;
}
