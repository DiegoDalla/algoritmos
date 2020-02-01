#include <stdio.h>
#include <stdlib.h>

// troca a posição
void troca(int *a, int *b)
{
	int temp;
	temp = *a; // armazena A numa variável vazia
	*a = *b; // armazena B em A
	*b = temp; // armazena o conteúdo anterior de A
}

// ordena o vetor
void ordena(int *v, int n)
{
	int i; // contador

	// laço para ir verificando cada posição
	for (i=0; i<n; i++)
	{
		
		// verifica se a posição verificada é maior que a próxima
		if(v[i] > v[i+1])
		{
			troca(&v[i], &v[i+1]); // chama a função para trocar as posições
			ordena(v, 10); // chamada recursiva da função
		}

	}

}

int main (int argc, char *argv[])
{
	int v[] = {2,1,3,5,4,9,10,8,7,6};
	int i;
	ordena(v, 10);
	printf("[");
	for (i = 0; i < 10; i++)
	{
		if(i!=9)
			printf(" %d,", v[i]);
		else
			printf(" %d ", v[i]);
	}
	printf("]\n");
	return 0;
}
