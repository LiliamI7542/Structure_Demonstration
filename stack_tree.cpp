#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
typedef struct node *treePointer;
struct node
{
    int data; 
    treePointer rightchild; // right child
    treePointer leftchild;  // left child
};

typedef struct listNode *listPointer;
struct listNode {
    int data;
    listPointer link;
};


treePointer new_node(int data)	//create new_node in tree
{
    treePointer p; // node
    p =(treePointer)malloc(sizeof(struct node)); 
    p->data = data; 
    p->leftchild = NULL; 
    p->rightchild = NULL;

    return(p); 
}

int top=-1;
treePointer stack[SIZE];

int empty(){
	return(top==-1);
} 

int full(){
	return(top==SIZE-1);
}

void push(treePointer data){
	if(full()){
		printf("the stack is full");
		exit(1);
	}
	stack[++top]=data;
}

treePointer pop(){
	if(empty()){
		printf("the stack is empty");
		exit(2);
	}
	return stack[top--];
}

void iterInorder (treePointer node) {
	for(;;) {
		
		for(; node; node = node->leftchild) {//從左邊開始 
			push(node);	
		}
		node = pop();
		if (!node) break;
		printf("%2d,", node->data);
		node = node->rightchild;	
	}
} 

int main(){
	 treePointer root; //new structure
    root = new_node(1); // making a new node
    
	root->leftchild = new_node(3); //left child of root
	root->rightchild = new_node(5); //right child of root
	root->leftchild->leftchild = new_node(7); 
    root->leftchild->rightchild = new_node(9);
    
    printf("using recursion:\n\n");
    printf("mid->left->right:\n");
    iterInorder(root);

    return 0;
}

