//410440241 賴芃君 
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
struct element{
	char type;
	int pos;
};
struct element stack[SIZE];
int top=-1;


int empty(){
	return(top==-1);
}
int full(){
	return(top==SIZE-1);
}

//410440241 賴芃君 
void push(struct element *pdata){
	if(full()){
		printf("stack is full");
		exit(1);
	}
	stack[++top].type=pdata->type;
	stack[top].pos=pdata->pos;
}
	
struct element *pop(){//410440241 LAI
	if(empty()){
		printf("stack is empty");
		exit(2);
	}
	return &stack[top--]; 
	
}

//410440241 賴芃君 
char other_side(char x){
    if(x==')')return'(';
    if(x=='(')return')';
    if(x==']')return'[';
    if(x=='[')return']';
}

//410440241 賴芃君 
int main(){
    char symb;
    int pos=0;
    struct element data;
    struct element *p;
    
    printf("410440241\n");
    while((symb=getchar())!='\n'){
        if(symb=='('||symb=='['){
            data.type=symb;
            data.pos=pos;
            push(&data); 
    	}
        else if(symb==')'||symb==']'){
            if(!empty()&&(p=pop())->type==other_side(symb))
                printf("%c%d,%d%c\n",p->type,p->pos,pos,other_side(p->type));
            else
                printf("right parenthesis %c at %d has no matching left parenthesis%c\n",other_side(symb),pos,symb);
                //為甚麼寫other_side(p->type),pos,p->type的時候只會出現'(',')' ?
                if(p->type!=other_side(symb))
                    push(p);
        }
        pos++;
    }
//410440241 賴芃君 
    while(!empty()){
        p=pop();
        printf("left parenthesis %c at %d has no matching right parenthesis%c\n",other_side(p->type),p->pos,p->type);
    }
  
    system("pause");
    return 0;
    
}
