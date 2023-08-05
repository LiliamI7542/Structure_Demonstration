#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//410440241 ø‡À¢ßg 
int lastOperationIsAddq=0;
int queue[SIZE];
int front=-1;
int rear=-1;
int empty(){
	return(front==rear)&&(!lastOperationIsAddq);
}
int full(){
	return(front==rear)&&(lastOperationIsAddq);
}
//410440241 ø‡À¢ßg  
void addq(int item){
	if(full()){
		printf("Queue is full!\n");
		exit(1);
	}
	rear=(rear+1)%SIZE;
	queue[rear]=item; 
	lastOperationIsAddq=1;
}
//410440241 ø‡À¢ßg 
int deleteq(){
	if(empty()){
		printf("Queue is empty!\n");
		exit(2);
	}
	front=(front+1)%SIZE;
	return queue[front];
	lastOperationIsAddq=0;
}

//410440241 ø‡À¢ßg 
int main(){
	int count,num,j;
	
	printf("\n====2-1-a===");
	for(count=0;count<21;count++){
		num=rand()%100+1;
	if(count%7==0)
		printf("\n%d ",num);
	else
		printf("%d ",num);
		addq(num);
	}
	
//410440241 ø‡À¢ßg 
	printf("\n====2-1-b===\n");
	int w;
	w=deleteq();
	for(j=0;j<19;j++){
	if(empty()){
		printf("one-element queue");
		exit(3);
	}
	w=deleteq();
}
	printf("w≠»=%d",w);
	
	system("pause");
	return 0;
}
