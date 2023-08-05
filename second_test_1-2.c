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
}Q, Q1,Q2;

int emptyq(struct queue *x){
    return (x->front==NULL);
}

//410440241 lai peng jun

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
    while (!emptyq(x)) {
   		int count;
        printf("%2d ", X = deleteq(x));
        addq(&Q1, X);
        if(count++==5){
    		printf("\n");
    		count=0;
		}
    }
    while(!emptyq(&Q1)) {
        addq(x, deleteq(&Q1));
    }
    printf("\n");
}


int main(void) {
//410440241 lai peng jun
    int i, m, x, n, b, y;
    for(i = 0; i < 24; i++) {
        x = rand() % 100+1;
        addq(&Q, x);
    }
    printf("====1-2-(a)====\n");
    printq(&Q);
    
    printf("====1-2-(b)====\n");
	while(!emptyq(&Q)) {
			y=b;
			b=m;
			m=n;
	        n = deleteq(&Q);
//410440241 lai peng jun
//410440241 lai peng jun
	        addq(&Q1, n);
	    }
	    while(!emptyq(&Q1)) {
	        addq(&Q, deleteq(&Q1));
	    }
		printf("y­È¬°:%d\n",y);
		addq(&Q,y); 
		printq(&Q);
		    
    return 0;
}






