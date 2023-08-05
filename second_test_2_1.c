#include<stdio.h>
#include<stdlib.h>
//410440241 lai peng jun
typedef struct listNode *listPointer;
struct listNode{
    int data;
    listPointer link;
};
struct stack{
//410440241 lai peng jun
    listPointer top;
}Q,S1,S2,S3;
void init(struct stack *ps){
    ps->top=NULL;
}

int empty(struct stack *ps){
    return(ps->top==NULL);   
}
void push(struct stack *ps,int data){
    listPointer temp=(listPointer) malloc(sizeof(struct listNode));
    temp->data=data;
    if(!empty(ps))
        temp->link=ps->top;
    
    else
        temp->link=NULL;
    ps->top=temp;            
}
int pop(struct stack *ps){
    listPointer temp;
//410440241 lai peng jun
    temp=ps->top;
    int i;
    if(empty(ps)){
        printf("stack is empty\n");
        exit(2);
    }
    i=ps->top->data;
    ps->top=ps->top->link;
    free(temp);
    return i;        
}
void prints(struct stack *ps){
	if(empty(ps))
        printf("stack is empty");
    int X;
    int count=0;
//410440241 lai peng jun
    while(!empty(ps)){
    	printf("%2d ",X=pop(ps));
        push(&S1,X); 
        if(count++==5){
		printf("\n");
		count=0;
		}
    }
    printf("\n");
    while(!empty(&S1))
        push(ps,pop(&S1));
        
//410440241 lai peng jun
}
int emptyq(struct stack *ps){
    return empty(ps);
}
int deleteq(struct stack *ps){
    return (pop(ps));
}
void printq(struct stack *ps){
    prints(ps);
}
void addq(struct stack *ps,int data){
    while(!empty(ps))
        push(&S2,pop(ps));
        
    push(ps,data);
    
    while(!empty(&S2))
        push(ps,pop(&S2));
        
}
//410440241 lai peng jun
int main(){
     int x, i, ans, m, n, z, b,j;
    for(i = 0; i < 24; i++) {
        x = rand() % 100;
        push(&Q, x);
    }
    printf("====2-1-(a)===\n");
    printq(&Q);
    printf("====2-1-(b)===\n");
	for(j=0;j<23;j++){
//410440241 lai peng jun
		
		addq(&S3,i=deleteq(&Q));
	}
	printf("i­È=%d\n",i);
	while(!empty(&Q))
		addq(&S3,b=deleteq(&Q));
	while(!empty(&S3))
		addq(&Q, m=deleteq(&S3));
	printq(&Q);

printf("====2-1-(c)===\n");
	for(i=0;i<22;i++){
		
		addq(&S3,j=deleteq(&Q));
	}
	printf("i­È=%d\n",j);
	while(!empty(&Q))
		addq(&S3,b=deleteq(&Q));
	while(!empty(&S3))
		addq(&Q, m=deleteq(&S3));
	printq(&Q);
		
    return 0;
}




