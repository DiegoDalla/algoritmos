#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leitura_sobrenome (char * nome, int tamanho)
{
	int i=0; // contador
	char aux[50], alterado[50]; // variáveis de transformação

	// copia a string para outra dentro da função, pois não pode alterar a string
	strcpy(aux, nome);

	// lê a string até o espaço
	while(aux[i] != ' ')
	{
		i++;
	}

	int j, n; // váriaveis auxiliares

	// auxiliar para não alterar a posição do I
	n = i;

	// leitura do sobrenome
	for(j=0; j<5; j++)
	{
		alterado[j] = aux[n+1];
		n++;
	}

	// sobrenome lido
	printf("O sobrenome da pessoa é: %s\n", alterado);

	// alterando string
	strcpy(alterado, "Souza");

	// printando string alterada
	printf("Mas ele foi alterado para: %s\n", alterado);
}

int main (int argc, char *argv[])
{
	char nome[50];
	printf("Digite o nome que deseja extrair o sobrenome: ");
	fgets(nome, 50, stdin);
	leitura_sobrenome(nome, strlen(nome));
	return 0;
}
