#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
//410440241 ��ˢ�g 
int totalinqueue=0;
int queue[SIZE];
int front=-1;
int rear=-1;

//410440241 ��ˢ�g 

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
	//ex:rear=(7+1)%8,�hrear�|����0 
	queue[rear]=data;
	//�e����front�w�Qdelete�X�ӡA�ҥHqueue�N�i�H�s�i�h 
	//���:queue[++rear]=data;
	totalinqueue++;
	//�{�br
}

//410440241 ��ˢ�g 
int deleteq(){
	if(empty()){
		printf("queue is empty");
		exit(2); 
	}
	front=(front+1)%SIZE;
	totalinqueue--;
	return queue[front];//�C�@���ƶi�h���޳�����@��
}
//410440241 ��ˢ�g 
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
//410440241 ��ˢ�g 
	printf("\n====2-2-b===");
	w=deleteq();
	for(j=0;j<18;j++){
		if(empty()){
		printf("one-element queue");
		exit(3);
		}
		w=deleteq();
	}
	printf("\nw��=%2d ",w);	
	system("pause");
	return 0;
}
