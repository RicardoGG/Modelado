#include <stdio.h>
#include "list.h"
#include <stdlib.h>
#include <assert.h>

struct node_struct * newNode(int v){
	struct node_struct *n = (struct node_struct*) malloc(sizeof(struct node_struct));
	assert(n != NULL);
	(*n).value = v;
	n->value = v;
	n->next = NULL;
	return n;
}

void deleteNode(struct node_struct *n){
	free(n);
}

//funcion que calcula la longitud de una lista de manera recursiva
int get_long(struct node_struct *l){
        //Base: si el siguiente del nodo que recibimos es null devolvemos 1
        if(l ==NULL)
	  return 0;
        if(l->next == NULL)
	  return 1;
	else
	  //Llamada recursiva
	  return 1+get_long(l->next);
}

int get_long_iter(struct node_struct *l){
  int iterador=0;
  while(l!= NULL){
    iterador+=1;
    l =  l->next;
  }
  return iterador;   
}

void print_list(struct node_struct* l){
	printf("[");
	for(; l != NULL; l= l->next){
		printf("%d%c ", l->value, l->next != NULL ? ',': ']');
	}
	
}
