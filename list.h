struct node_struct{
	int value;
	struct node_struct* next;
};



struct node_struct * newNode(int v);


void deleteNode(struct node_struct *n);
int get_long(struct node_struct *l);
int get_long_iter(struct node_struct *l);
void print_list(struct node_struct* l);
int maximoElem(struct node_struct *l);
struct node_struct*reversa(struct node_struct*lista);
