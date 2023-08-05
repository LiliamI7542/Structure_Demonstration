#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int stack[SIZE];
int top=-1;

int empty(){
	return(top==-1);
}
int full(){
	return(top==SIZE-1);
}

void push(int data){
	if(full()){
		printf("stack is full");
		exit(1);
	}
	stack[++top]=data;
}
	
int pop(){
	if(empty()){
		printf("stack is empty");
		exit(2);
	}
	return stack[top--]; 
	
}


int main(){

/*struct stint{
	int f1,f2,f3;
};
struct stfloat{
	float f4;
	double f5;
}; 
struct sam{
	char utype;
	float f6, f7;
	double f8;
	union { 
	struct stint f11;
	struct stfloat f12;
	}
	f13;
};
struct sam s[100];

int *si;
char *sc;
float *sf;
double *sd;
struct sam *p0;

sc= &(s[17].utype);
printf("(a)=0x%x,size=%d\n",sc,sizeof(s[17].utype));
sf= &(s[13].f6);
printf("(b)=0x%x,size=%d\n",sf,sizeof(s[13].f6));
sd= &(s[8].f8);
printf("(c)=0x%x,size=%d\n",sd,sizeof(s[8].f8));
si= &(s[27].f13.f11.f3);
printf("(d)=0x%x,size=%d\n",si,sizeof(s[27].f13.f11.f3));
sd= &(s[27].f13.f12.f5);
printf("(e)=%d,size=%d\n",sd,sizeof(s[27].f13.f12.f5));
}
*/

/* Q2
char symb;
int pos=0;
while((symb=getchar())!='\n'){
	if(symb=='(')
		push(pos);
	else if(symb==')'){
		if(!empty())
			printf("matching pair(%d,%d)\n",pop(),pos);
		else
			printf("right parenthesis at %d has no matching left parenthsis\n",pos);
	}
	pos++; 
	}
while(!empty()){
	printf("left parenthesis at %d has no matching right parenthsis\n",pop());
}

*/

/*
Q3
char symb;
int pos=0;

while((symb=getchar())!='\n'){
	printf("%c",symb);
	push(symb);
}
printf("\n");
while(!empty()){
	
	printf("%c",pop());
}*/
/*
Q4
int j;
int i;
for(j=0;j<18;j++){
	int x = rand()%100 + 1;
	if(j%6==0)
		printf("\n%2d ",x);
	else
		printf("%2d ",x);
	push(x);
}
for(i=0;i<18;i++){
	if(i%6==0)
		printf("\n%2d ",pop());
	else
		printf("%2d ",pop());
}
for(j=0;j<18;j++){
	int x = rand()%100 + 1;
	if(j%6==0)
		printf("\n%2d ",x);
	else
		printf("%2d ",x);
	push(x);
}
int m;
while(!empty()){
	m=pop();
}
printf("%d ",m);
for(j=0;j<18;j++){
	int x = rand()%100 + 1;
	if(j%6==0)
		printf("\n%2d ",x);
	else
		printf("%2d ",x);
	push(x);
}
for(i=0;i<12;i++){
	m=pop();
}
printf("%d",m);
for(j=0;j<18;j++){
	int x = rand()%100 + 1;
	if(j%6==0)
		printf("\n%2d ",x);
	else
		printf("%2d ",x);
	push(x);
}
int p;
for(i=0;i<17;i++){
	p=pop();
}
printf("%d",p);

*/

 int j;
    for(j=1;j<=10;j++){
        int x=rand()%70;
        printf("%d\n",x);
        push(x);
    }
    int k=pop();
   
    int i;
    for(i=1;i<9;i++){
    if(empty()){
        printf("%d-element stack",i);
        exit(4);
    }
    k=pop();
    }
    
system("pause");
return 0;
}
