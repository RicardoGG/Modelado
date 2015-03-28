#include <stdlib.h>
#include <stdio.h>
#include "list.h"

struct node_struct*reversa(struct node_struct*lista){
	struct node_struct*temp= (struct node_struct*) malloc(sizeof(struct node_struct));
	struct node_struct*anterior= (struct node_struct*) malloc(sizeof(struct node_struct));
	if(lista == NULL)
		return NULL;
	while(lista !=NULL){
		anterior=newNode(lista->value);
		anterior->next = temp;
		temp=anterior;
		lista=lista->next;
	}
	return temp;
}

int maximoElem(struct node_struct* l){
	int maximo = l->value;
	while (l!=NULL){
		if(l->value > maximo)
			maximo = l->value;
		l=l->next;
	}
	return maximo;
}
	
int main(void){
	int i;
	struct node_struct *l = NULL;
	for(i = 0; i < 10 ; i++){
		struct node_struct * nuevo ;
		nuevo = newNode(i);
		nuevo->next = l;
		l = nuevo;
	}
	print_list(l);
	printf("%d", maximoElem(l));
	printf("%d", get_long(l));
	printf(" ");
	printf("%d", get_long_iter(l));
	printf("\n");
	
	print_list(reversa(l));



	struct node_struct * next;

	while(l != NULL){
		next = l->next;
		free(l);
		l = next;
	}

	
	return 0;
}
