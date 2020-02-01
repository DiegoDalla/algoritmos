#include <stdio.h>
#include <stdlib.h>

void inicializa_vetor(int *v)
{
	int i;
	for (i = 0; i < 20; i++)
	{
		v[i] = 0;
	}
}

// faz os elementos assumirem a posição a sua frente após o elemento daquela posição ter sido removido
void trocar(int *a, int *b)
{
	int temp;
	temp = *a; // armazena A numa variável vazia
	*a = *b; // armazena B em A
	*b = temp; // armazena o conteúdo anterior de A
}

int conta_vetor(int *v)
{
	int i=0;

	while(v[i]!=0)
	{
		i++;
	}
	
	return i;
}


void insere(int *v, int n, int valor)
{
	int i=0;

	v[n] = valor;
}

void remover(int *v, int n)
{
	int i, j;


	for (i = 0; i < n; i++)
	{
		printf("Valor removido: %d\n", v[i]);
		v[i] = 0;
		system("sleep 1");
		while(v[j+1] == 0)
		{
			trocar(&v[j], &v[j+1]);
			j++;	
		}
	}

}


int main (int argc, char *argv[])
{
	int v[20], valor;
	int c=1;


	inicializa_vetor(v);


	while(c!=0)
	{
		printf("Digite o valor que quer adicionar na fila: ");
		scanf("%d", &valor);
		insere(v, conta_vetor(v), valor);
		printf("Deseja continuar? ");
		scanf("%d", &c);
	}


	int i;

	printf("Fila armazenada com sucesso!\n");
	for (i = 0; i < conta_vetor(v); i++)
	{
		if(i!=conta_vetor(v)-1)
			printf("%d, ", v[i]);
		else
			printf("%d\n", v[i]);
	}


	printf("Preparando para remoção de valores da fila...\n");
	system("sleep 0.5");
	
	remover(v, conta_vetor(v));


	printf("Fila excluída com sucesso!\n");

	return 0;
}
