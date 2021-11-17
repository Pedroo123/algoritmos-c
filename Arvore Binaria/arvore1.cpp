#include <stdio.h>
#include <stdlib.h>

struct item {
	int cod;	
};

typedef struct item Item;

struct node {
	Item item;
	node *esq;
	node *dir;
};

typedef struct node Node;

Node *inicializa() {
	return NULL;
}

Item criaItem(int cod) {
	
	Item item;
	item.cod = cod;
	
	return item;
}

Node *inserir(Node *root, Item x) {
	
	if (root == NULL) {
		Node *aux = (Node *)malloc(sizeof(Node));
		aux->item = x;
		aux->esq = NULL;
		aux->dir = NULL;
		
		return aux;
	} else {
		
		if (x.cod > root->item.cod) {
			root->dir = inserir(root->dir, x);
		} else if (x.cod < root->item.cod) {
			root->esq = inserir(root->esq, x);
		}
	}
	
	return root;
}

void imprimeArvore(Node *root) {
	
	if(root != NULL) {
		printf("%d ", root->item.cod);
		imprimeArvore(root->esq);
		imprimeArvore(root->dir);
	}
	
}

void liberaNos(Node *root) {
	
	if(root != NULL) {
		liberaNos(root->esq);
		liberaNos(root->dir);
		free(root);
	}
	
}

Node *busca(Node *root, int cod) {
	
	if (root != NULL) {
		if(root->item.cod == cod) return root;
		else {
			if (cod > root->item.cod) return busca(root->dir, cod);
			else return busca(root->esq, cod);
		}
	}
	
	return NULL;
}

Node deletaNode(Node *root, int cod) {
	
	if (root != NULL) {
		
		if(root->item.cod) {
			root->dir = deletaNode(root->dir, cod);	
		} else if (cod < root->item.cod) {
			root->esq = deletaNode(root->esq, cod);
		} else {
			if (root->esq == NULL && root->dir == NULL) {
				free(root);
				return NULL;
			} else if (root->esq == NULL && root->dir != NULL) {
				
				Node *aux = root->dir;
				free(root);
				
				return aux;
			} else if (root->left != NULL && root->dir == NULL) {
				Node *aux = root->esq;
				free(root);
				
				return aux;
			}
		}
	}
	
}

int main() {

	Node *root = inicializa();
	root = inserir(root, criaItem(2));
	root = inserir(root, criaItem(4));
	root = inserir(root, criaItem(3));
	imprimeArvore(root);
	
	Node *tmp = busca(root, 12);
	
	if(tmp == NULL) {
		printf(">> Elemento nao encontrado!");
	} else {
		printf(">> Elemento encontrado!");
	}
	
	liberaNos(root);
	return 0;
}