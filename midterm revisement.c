 #include <stdio.h>
 #include <stdlib.h> 
 #define SIZE 100
 //410440241 ø‡À¢ßg 
struct stack{
    int A[SIZE];
    int top;
};
int empty(struct stack *s){
    return s->top==-1;
}
int full(struct stack *s){
    return s->top==SIZE-1;   
}
 //410440241 ø‡À¢ßg 
void push(struct stack *s,int data){
    if(full(s)){
        printf("stack is full");
        exit(1);
    }
    s->A[++s->top]=data;    
}
int pop(struct stack *s){
    if(empty(s)){
        printf("stack is empty");
        exit(2);
    }
    return s->A[s->top--];    
}

 //410440241 ø‡À¢ßg 
int main(){
	int i;
	int count;
	int num;
	struct stack S,S1;
	S.top=S1.top=-1;
	int x,y,z,w,k;
	printf("410440241 ø‡À¢ßg");
	printf("\n\n====1-1===\n");
	for(count=0; count<6;count++){
		num=rand()%100+1;
		printf("%2d ",num);
		push(&S,num);
	}
 //410440241 ø‡À¢ßg 
	
	printf("\n\n====1-2===\n");
	for(i=0;i<11;i++){
		if(empty(&S)){
			printf("%d-element stack",i);
			goto here; 
		}
		x=pop(&S);
	}
	printf("\n%d",x);
	here:
	printf("\n\n====1-3===\n");
	for(count=0; count<21;count++){
		num=rand()%100+1;
		if(count%7==0)
			printf("\n%2d ",num);
		else
			printf("%2d ",num);
		push(&S,num);
	}
 //410440241 ø‡À¢ßg 

	printf("\n\n====1-4===\n");
		push(&S1,y=pop(&S));
		for(i=0;i<10;i++){
			if(empty(&S)){
				printf("%d-element stack",i);
				exit(3); //break•uØ‡∏ı•X¬˜•L≥Ã™Ò™∫§@ºh∞j∞È
			}
			push(&S1,y=pop(&S));	
		}
	printf("y≠»=%d",y);
	
	while(!empty(&S1))
		push(&S,pop(&S1));
	
 //410440241 ø‡À¢ßg 
	printf("\n\n====1-5===\n");
		push(&S1,z=pop(&S));
		for(i=0;i<19;i++){
			if(empty(&S)){
				printf("%d-element stack",i);
				exit(4);
			}
			push(&S1,z=pop(&S));
		}
		printf("z≠»=%d",z);
	while(!empty(&S1))
		push(&S,pop(&S1));
	
 //410440241 ø‡À¢ßg 
	printf("\n\n====1-6===\n");
	push(&S1,w=pop(&S));
	for(i=0;i<18;i++){
		if(empty(&S)){
			printf("%d-element stack",i);
			exit(5);
		}
		push(&S1,w=pop(&S));
	}
	printf("w≠»=%d",w);
	while(!empty(&S1))
		push(&S,pop(&S1));
	
 //410440241 ø‡À¢ßg 
	printf("\n\n====1-7===\n");

	for(i=0;i<21;i++){
	push(&S1,k=pop(&S));
		if(i%7==0)
			printf("\n%2d ",k);
		else
			printf("%2d ",k);
	}
	system("pause");
	return 0;
}
