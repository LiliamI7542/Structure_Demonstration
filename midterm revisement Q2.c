#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//410440241 賴芃君 
int totalinqueue=0;
int queue[SIZE];
int front=-1;
int rear=-1;

//410440241 賴芃君 

int empty(){
	return(front==rear)&&(totalinqueue==0);
} 

int full(){
	return(front==rear)&&(totalinqueue==SIZE);
}

void addq(int data){
	if(full()){
		printf("queue is full");
		exit(1);
	}
	rear=(rear+1)%SIZE;
	//ex:rear=(7+1)%8,則rear會等於0 
	queue[rear]=data;
	//前面的front已被delete出來，所以queue就可以存進去 
	//原來:queue[++rear]=data;
	totalinqueue++;
	//現在r
}

//410440241 賴芃君 
int deleteq(){
	if(empty()){
		printf("queue is empty");
		exit(2); 
	}
	front=(front+1)%SIZE;
	totalinqueue--;
	return queue[front];//每一次排進去索引都往後一位
}
//410440241 賴芃君 
int main(){
	printf("410440241");
	int i;
	int j;
	int w;
	printf("\n====2-2-a===");
	for(i=0;i<21;i++){
		int x = rand()%100+1;
		if(i%7==0){
			printf("\n%2d ",x);
		}
		else
			printf("%2d ",x);
		addq(x);
	}
//410440241 賴芃君 
	printf("\n====2-2-b===");
	w=deleteq();
	for(j=0;j<18;j++){
		if(empty()){
		printf("one-element queue");
		exit(3);
		}
		w=deleteq();
	}
	printf("\nw值=%2d ",w);	
	system("pause");
	return 0;
}
