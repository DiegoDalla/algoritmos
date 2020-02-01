#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct no
{
	int date;
	struct no * next;
}no;

/////////
//cria_nó
no * create_no()
{
	no * new = (no*)malloc(sizeof(no));
	return new;
}

////////////////////////
//insere_elemento_inicio
no * insert_front(no * list, int content)
{
	no * new_no = create_no();
	new_no->date = content;
	//verifica_se_lista_é_vazia
	if(list == NULL)
	{
		list = new_no;
		new_no->next = NULL;
	}
	//se_não_tiver_vazia_modifica_os_ponteiros
	else
	{
		new_no->next = list;
		list = new_no;
	}
	return list;
}

////////////////
//printa_a_lista
void printL(no * list)
{
	no * aux = list;
	
	while(aux != NULL)
	{
		if(aux->next != NULL)
			printf("%d ", aux->date);
		else
			printf("%d\n", aux->date);
		aux = aux->next;
	}
}


int main (int argc, char *argv[])
{
	int content, n = 0;
	no * list = NULL;
	while(n<5)
	{
		scanf("%d", &content);
		list = insert_front(list, content);
		n++;
	}	
	printL(list);

	return 0;
}
