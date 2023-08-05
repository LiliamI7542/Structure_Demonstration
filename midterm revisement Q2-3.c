#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//410440241 賴芃君 
struct queue{
	int front;
	int rear;
	int A[SIZE];
};
//410440241 賴芃君 
int empty(struct queue *x){
	return(x->front==(x->rear));
} 

int full(struct queue *x){
	return(x->front==(x->rear+1)%SIZE);
}

void addq(struct queue *x, int data){
	if(full(x)){
		printf("queue is full");
		exit(1);
	}
	x->rear=(x->rear+1)%SIZE;
	//ex:rear=(7+1)%8,則rear會等於0 
	x->A[x->rear]=data;

}

//410440241 賴芃君 
int deleteq(struct queue *x){
	if(empty(x)){
		printf("queue is empty");
		exit(2); 
	}
	x->front=(x->front+1)%SIZE;
	return x->A[x->front];//每一次排進去索引都往後一位
}

//410440241 賴芃君 
int main(){
	struct queue Q,Q1;
	Q.front=Q.rear=Q1.front=Q1.rear=-1;
	int i;
	int j;
	int m;
	int x;
	printf("\n====2-3-a===");
	
	for(i=0;i<21;i++){
		x = rand()%100+1;
		if(i%7==0){
			printf("\n%2d ",x);
		}
		else
			printf("%2d ",x);
		addq(&Q,x);
	}
//410440241 賴芃君 
	printf("\n====2-3-b===");
	addq(&Q1,m=deleteq(&Q));
	for(j=1;j<11;j++){
		if(empty(&Q)){
		printf("\n%d-element queue",j);
		exit(3);
		}
		addq(&Q1,m=deleteq(&Q));
	}
	printf("\n%2d ",m);
	while(!empty(&Q))
		addq(&Q1,deleteq(&Q));
	while(!empty(&Q1))
		addq(&Q,deleteq(&Q1));
		
	printf("\n====2-3-c===");
	j=0;
	while(!empty(&Q)){
		if(j%7==0){
			printf("\n%2d ",deleteq(&Q));
		}
		else
			printf("%2d ",deleteq(&Q));
		j++;
	}
	system("pause");
	return 0;
}
