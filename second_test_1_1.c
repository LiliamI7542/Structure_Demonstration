#include <stdio.h>
#include <stdlib.h>
//410440241 lai peng jun
typedef struct listnode *listPointer;

struct listnode{
	int data;
	listPointer link;
}; 

struct stack{
	listPointer top;
}S,S1,S2;

int empty(struct stack *x){
	return(x->top==NULL);
}

void push(struct stack *x,int item){
	listPointer temp =(listPointer)malloc(sizeof(struct listnode));
	temp->data=item;
	temp->link=x->top;
	x->top=temp;
//410440241 lai peng jun
}

int pop(struct stack *x){
	if(empty(x)){
		printf("stack is empty\n");
		exit(2);
	}
	int temp=x->top->data;
	x->top=x->top->link; 
	return temp;
}



void prints(struct stack *x) {
    if (empty(x)) {
        printf("stack is empty\n");
    }
    int X;
    while (!empty(x)) {
//410440241 lai peng jun
    	int count;
        printf("%2d ", X = pop(x));
        push(&S1, X);
		if(count++==9){
			printf("\n");
			count=0;
		}
    }
    while(!empty(&S1)) {
        push(x, pop(&S1));
	}
    printf("\n");
}

int main(){
	printf("410440241 lai peng jun");
	int i,j,k,m,x,n,z;
	
//410440241 lai peng jun
	for(i=0;i<20;i++){
		int sum=rand()%100+1;
		push(&S,sum);
	}
	printf("====1-1-(a)====\n") ;
	prints(&S);
	
	printf("====1-1-(b)====\n") ;	
	for(i=0;i<10;i++){
		push(&S2,k=pop(&S));
	}
	printf("x值=%d\n",k);
	while(!empty(&S2))
		push(&S,m=pop(&S2));
	printf("此時stack為:\n");
	prints(&S);
	
//410440241 lai peng jun
	printf("====1-1-(c)====\n") ;
	for(i = 0; i < 20; i++) {
        push(&S2, n=pop(&S));

    }
    push(&S,n);
    while(!empty(&S2)){
        push(&S,j= pop(&S2));
    }
	printf("此時stack為:\n");
    prints(&S);
//410440241 lai peng jun

	return 0;

}



