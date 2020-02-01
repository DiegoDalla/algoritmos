#include <stdio.h>
#include <stdlib.h>
int i=0;

void setar_vetor(int *V)
{
	V[i] = i;
	i++;
	if(i<101)
		setar_vetor(V);
}

int main (int argc, char *argv[])
{
	int V[101], j;
	setar_vetor(V);
	printf("[");
	for(j=0; j < 101; j++)
	{
		if(j<100)
			printf(" %d,", V[j]);
		else
			printf(" %d ", V[j]);
	}
	printf("]\n");

	return 0;
}
