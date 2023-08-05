#include<stdio.h>
#include<stdlib.h>
//410440241 lai peng jun
typedef struct listNode *listPointer;
struct listNode{
    int data;
    listPointer link;
};
struct stack{
    listPointer top;
}S,S1,S2;
void init(struct stack *ps){
    ps->top=NULL;
}

int empty(struct stack *ps){
    return(ps->top==NULL);   
}
//410440241 lai peng jun
void push(struct stack *ps,int data){
    listPointer temp=(listPointer) malloc(sizeof(struct listNode));
    temp->data=data;
    if(!empty(ps))
        temp->link=ps->top;
    
    else
        temp->link=NULL;
    ps->top=temp;            
}
//410440241 lai peng jun
int pop(struct stack *ps){
    listPointer temp;
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
//410440241 lai peng jun
void prints(struct stack *ps){
    if(empty(ps))
        printf("stack is empty");
    int X;
    int count=0;
    while(!empty(ps)){
        printf("%2d ",X=pop(ps));
        if(count++==10){
			printf("\n");
			count=0;
		}
        push(&S2,X); 
    }
    while(!empty(&S2))
        push(ps,pop(&S2));
    
	if(count!=0){
		printf("\n");
	}
        
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
//410440241 lai peng jun
void addq(struct stack *ps,int data){
    while(!empty(ps))
        push(&S2,pop(ps));
        
    push(ps,data);
    
    while(!empty(&S2))
        push(ps,pop(&S2));
        
}
//410440241 lai peng jun
int main(void){
    int j,m,i;
    init(&S);
    init(&S1);
    printf("���|��l���e     \n");
    for(j=0;j<30;j++){
        int x=rand()%100;
        addq(&S,x);
    }
        printq(&S);
    printf("\n\n============================================");
    printf("\n�Ĥ@�D: ���wm ���ƭȬ����Y��_���ĤT����\n");
    printq(&S);     
    addq(&S1,m=deleteq(&S));
    if(emptyq(&S)){
        printf("1-element queue\n");
        exit(3);
    }
    addq(&S1,m=deleteq(&S));
    if(emptyq(&S)){
        printf("2-element queue\n");
        exit(4);
    }    
    addq(&S1,m=deleteq(&S));
    
    printf("\nm=: %d\n\n",m);
    printq(&S);
    printf("\n\n============================================");
    printf("\n�ĤG�D: ���wm ���ƭȬ����Y��_���ĤT�����A�B�����ܦ�C\n");
    while(!emptyq(&S))
        addq(&S1,deleteq(&S));
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));    
    printq(&S);

    addq(&S1,m=deleteq(&S));
    if(emptyq(&S)){
        printf("1-element queue\n");
        exit(3);
    }
    addq(&S1,m=deleteq(&S));
    if(emptyq(&S)){
        printf("2-element queue\n");
        exit(4);
    }    
    addq(&S1,m=deleteq(&S));
    printf("\nm=: %d\n\n",m);
    while(!emptyq(&S))
        addq(&S1,deleteq(&S));
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
//410440241 lai peng jun
    printq(&S);
    printf("\n\n============================================");
    printf("\n�ĤT�D: ���wm ���ƭȬ����Y��_���ĤQ�G����\n");
    printq(&S);
    addq(&S1,m=deleteq(&S));
    for (i=1;i<12;i++){
        if(emptyq(&S)){
            printf("%d-elements Sueue",i);
            exit(4);
        }
        addq(&S1,m=deleteq(&S));
    }
    printf("\nm=:%d\n\n",m);
    printq(&S);   
//410440241 lai peng jun
    printf("\n\n============================================");
    printf("\n�ĥ|�D: ���wm ���ƭȬ����Y��_���ĤQ�G�����A�B�����ܦ�C\n");
    while(!emptyq(&S))
        addq(&S1,deleteq(&S));
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    printq(&S);
    
//410440241 lai peng jun
    addq(&S1,m=deleteq(&S));
    for (i=1;i<12;i++){
        if(emptyq(&S)){
            printf("%d-elements queue",i);
            exit(4);
        }
        addq(&S1,m=deleteq(&S));
    }
//410440241 lai peng jun
    printf("\nm=:%d\n\n",m);
    while(!emptyq(&S))
        addq(&S1,deleteq(&S));
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    printq(&S);   
    printf("\n\n============================================");
    printf("\n�Ĥ��D: ���wm ���ƭȬ��Ƨ�\n");
//410440241 lai peng jun
    printq(&S);
    while(!emptyq(&S))
        addq(&S1,m=deleteq(&S));
    printf("\nm=:%d\n\n",m);
    printq(&S);
    printf("\n\n============================================");
    printf("\n�Ĥ��D: ���wm ���ƭȬ��Ƨ��A�B�����ܦ�C\n");    
    while(!emptyq(&S1))
        addq(&S,m=deleteq(&S1));
    printq(&S);
    while(!emptyq(&S))
        addq(&S1,m=deleteq(&S));
//410440241 lai peng jun
    printf("\nm=:%d\n\n",m);
    while(!emptyq(&S1))
        addq(&S,m=deleteq(&S1));
    printq(&S);   
    printf("\n\n============================================");
    printf("\n�ĤC�D: ���wm ���ƭȬ��Ƨ���_���ĤG�����C\n");    
    printq(&S);
    int k;
    addq(&S1,k=deleteq(&S));
    if(emptyq(&S)){
        printf("1-elements queue");
//410440241 lai peng jun
        exit(5);
}
    while(!emptyq(&S)){
        m=k;
        k=deleteq(&S);
        addq(&S1,k);
    }
    printf("\nm=:%d\n\n",m); 
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    printf("%d ",k);//�Ƨ������bqueue��
    printf("\n\n============================================");
    printf("\n�ĤK�D: ���wm ���ƭȬ��Ƨ���_���ĤG�����A�B�����ܦ�C\n");
    printq(&S);
    addq(&S1,k=deleteq(&S));
 //410440241 lai peng jun
   if(emptyq(&S)){
        printf("1-elements queue");
        exit(5);
}
    while(!emptyq(&S)){
        m=k;
        k=deleteq(&S);
        addq(&S1,k);
    }
 //410440241 lai peng jun
   printf("\nm=:%d\n\n",m); 
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    printq(&S);   
    printf("\n\n============================================");
    printf("\n�ĤE�D: ���wm ���ƭȬ��Ƨ���_���ĤT����\n");
    printq(&S);
    int l;
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
//410440241 lai peng jun
        printf("1-elements queue");
        exit(6);
    }
    addq(&S1,k=deleteq(&S));
    if(emptyq(&S)){
        printf("2-elements queue");
        exit(6);
}
    while(!emptyq(&S)){
        m=k;
        k=l;
        l=deleteq(&S);
        addq(&S1,l);
    }
//410440241 lai peng jun
    printf("\nm=:%d\n\n",m);
    printf("%d ",k);//�Ƨ���_�ĤG��
    printf("%d ",l);//�Ƨ�
    printf("\n\n============================================");
    printf("\n�ĤQ�D: ���wm ���ƭȬ��Ƨ���_���ĤT�����A�B�����ܦ�C\n");
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    
//410440241 lai peng jun
    printq(&S);
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
        printf("1-elements queue");
        exit(6);
//410440241 lai peng jun
    }
    addq(&S1,k=deleteq(&S));
    if(emptyq(&S)){
        printf("2-elements queue");
        exit(6);
//410440241 lai peng jun
}
    while(!emptyq(&S)){
        m=k;
        k=l;
        l=deleteq(&S);
        addq(&S1,l);
    }
    printf("\nm=:%d\n\n",m);
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
    printq(&S);   
//410440241 lai peng jun
    printf("\n\n============================================");
    printf("\n�ĤQ�@�D: ���wm ���ƭȬ��Ƨ���_���ĥ|�����C\n");    
    printq(&S);
    int n;
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
        printf("1-elements queue");
        exit(7);
    }
    addq(&S1,k=deleteq(&S));
    if(emptyq(&S)){
//410440241 lai peng jun
        printf("2-elements queue");
        exit(7);
    }
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
        printf("3-elements queue");
        exit(7);
    }
//410440241 lai peng jun
    while(!emptyq(&S)){
        m=k;
        k=n;
        n=l;
        l=deleteq(&S);
        addq(&S1,l);
    }
    printf("\nm=:%d\n\n",m);
    printf("%d ",k);//�Ƨ���_�ĤT��
    printf("%d ",n);//�Ƨ���_�ĤG��
    printf("%d ",l);//�Ƨ�
    
    while(!emptyq(&S1))
        addq(&S,deleteq(&S1));
//410440241 lai peng jun
    printf("\n\n============================================");
    printf("\n�ĤQ�G�D: ���wm ���ƭȬ��Ƨ���_���ĥ|�����A�B�����ܦ�C�C\n");    
    printq(&S);
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
        printf("1-elements queue");
        exit(7);
    }
    addq(&S1,k=deleteq(&S));
    if(emptyq(&S)){
        printf("2-elements queue");
        exit(7);
    }
    addq(&S1,l=deleteq(&S));
    if(emptyq(&S)){
        printf("3-elements queue");
        exit(7);
    }
    while(!emptyq(&S)){
        m=k;
//410440241 lai peng jun
        k=n;
        n=l;
        l=deleteq(&S);
        addq(&S1,l);
    }
    printf("\nm=:%d\n\n",m);    
    while(!emptyq(&S1)){
        addq(&S,deleteq(&S1));
    }    
    printq(&S);
    return 0;
}




