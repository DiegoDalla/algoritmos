#include <stdio.h>
#include <stdlib.h>

// struct da árvore - lista duplamente encadeada
typedef struct NO
{
	int info;
	struct NO *esq;
	struct NO *dir;
}ArvBin;

// inicializa a árvore
ArvBin * cria_ArvBin()
{
	ArvBin * raiz = (ArvBin*)malloc(sizeof(ArvBin));
	if (raiz != NULL)
		*raiz = NULL;
	return raiz;
}

void libera_NO(struct NO * no)
{
	if (no == NULL)
		return;
	libera_NO(no->esq);
	libera_NO(no->dir);
	free(no);
	no = NULL;
}

void libera_ArvBin(ArvBin* raiz)
{
	if (raiz == NULL)
		return;
	libera_NO(*raiz); // libera cada nó
	free(raiz); // libera a raiz
}
void libera_NO (struct

int main (int argc, char *argv[])
{
	ArvBin * raiz = cria_ArvBin();
	libera_ArvBin(raiz);
	return 0;
}
