#include <stdio.h>
#include <stdlib.h>
//410440241 lai peng jun
typedef struct listNode *listPointer; 
struct listNode{
    int data;          
    listPointer link;  
};
struct queue{
    listPointer rear, front; 
}S, S1, S2;
//410440241 lai peng jun
int emptyq(struct queue *x){
    return (x->front==NULL);
}


void addq(struct queue *x,int item){
    listPointer temp;
    temp=(listPointer)malloc(sizeof(struct listNode));
    temp->data=item;
    temp->link=NULL;
    if(!emptyq(x))
        x->rear->link=temp;    
    else
        x->front=temp;
    x->rear=temp;
}

int deleteq(struct queue *x){
    listPointer temp;
    temp=x->front;
    int i;
    if(emptyq(x)){
        printf("queue is empty");
        exit(2);
    }
    i=temp->data;
    x->front=x->front->link;
    free(temp);
    return i;
}
//410440241 lai peng jun
void printq(struct queue *x) {
    if(emptyq(x)) {
        printf("queue is empty\n");
    }
    int X;
    int count=0;
    while (!emptyq(x)) {
        printf("%d ", X = deleteq(&S));
        addq(&S1, X);
        if(count++==9){
        	printf("\n");
        	count=0;
		}
    }
    while(!emptyq(x)) {
        addq(&S1, deleteq(&S));
    }
//410440241 lai peng jun
    while(!emptyq(&S1)) {
        addq(&S, deleteq(&S1));
    }
    printf("\n");
}

void push(struct queue *ps, int item) {
	addq(ps, item);
}

int pop(struct queue *ps) {
	struct queue q1;
	q1.front = q1.rear = NULL;
	int a, i, count = 0;
	while(!emptyq(ps)) {
		addq(&q1, a = deleteq(ps));
		count++;
	}
//410440241 lai peng jun
	for(i = 1; i <= count - 1; i++) {
		addq(ps, deleteq(&q1));
	}
	return a;
}
void prints(struct queue *x){
	printq(x);
}

int main() {
    int i, x, a, m;
    for(i = 0; i < 20; i++) {
    	x = rand() % 100 + 1;
//410440241 lai peng jun
    	push(&S, x);
	}
	printf("===2-2-(a)===\n");
	prints(&S);
	
	for(i=0;i<19;i++){
		push(&S2,m=pop(&S));
	}
	while(!emptyq(&S2))
		push(&S,a=pop(&S2));
		
	printf("===2-2-(b)===\n");
	printf("m­È¬°:%d\n",m);
	
	for(i=0;i<18;i++){
		push(&S2,m=pop(&S));
	}
	printf("===2-2-(c)===\n");
	printf("m­È¬°:%d\n",m);
    return 0;
}
//410440241 lai peng jun





