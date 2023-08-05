#include <stdio.h>
#include <stdlib.h>

//410440241 lai peng jun


typedef struct listNode *listPointer;
struct listNode {
    int data;
    listPointer link;
};

void insertnum(listPointer *p,int x){
    listPointer temp,r,q;
    temp = (listPointer)malloc(sizeof(struct listNode));
    temp->data=x;
    q=*p;
//410440241 lai peng jun

    while(q!=NULL && x>q->data) {
    	r=q;
    	q=q->link;
    }
    if(q==*p){            
    	temp->link=q;
    	*p=temp;
    }
    else{                
    	temp->link=q;
    	r->link=temp;	
    }    
}

//410440241 lai peng jun
listPointer invert(listPointer p){
    listPointer  middle, trail;
    middle = NULL;
    while (p) {
    	trail = middle;
    	middle = p;
    	p = p->link;
    	middle->link = trail;
    }
    return middle;
}

listPointer concatenate(listPointer list1, listPointer list2){
    listPointer temp;
    if(!list1)
        return list2;
    if(!list2)
        return list1;
        
//410440241 lai peng jun
    temp=list1;
    while(temp->link!=NULL){
    	temp=temp->link;
    }
    temp->link=list2;
    return list1;
}

void printL(listPointer p){
    listPointer temp=p;
    int count;
    while(temp!=NULL){
        printf("%2d,",temp->data);
        temp=temp->link;
        if(count++==9){
        	printf("\n");
        	count=0;
//410440241 lai peng jun
		}
    }
	printf("\n");  
}

listPointer Lin2Cir(listPointer p){
    listPointer temp;
    temp=p;
    while(temp->link!=NULL){
    	temp=temp->link;
    }
    temp->link=p;
    return temp;
}

void printC(listPointer p){
    listPointer temp;
//410440241 lai peng jun
    temp=p->link;
    while(temp!=p){
        printf("%d,",temp->data);
        temp=temp->link;
    }
    printf("%d",temp->data);
}

listPointer concatenatec(listPointer list1, listPointer list2){
    listPointer temp;
    if(!list1)
        return list2;
    if(!list2)
        return list1;
        
    temp=list1->link;
    list1->link=list2->link;
    list2->link=temp;
    return list2;
//410440241 lai peng jun
}

int cdelete(listPointer *p){
    listPointer temp = NULL;
    int x;
    x=(*p)->data;
    temp=*p;
    if(temp->link!=(*p) && temp->link != NULL)
        *p=temp->link;
	free(temp);
//410440241 lai peng jun
    return x;
}


int main(void) {
	printf("410440241 lai peng jun\n");
	int i, x, m, a;
	listPointer p,p0,p1,pinv;
	pinv=NULL;
	p0 = NULL;
	p1 = NULL;
	p  = NULL;
	for(i=0;i<20;i++){
		x=rand()%100+1;
		insertnum(&p0,x);
	} 
	printf("===3-1===\n");
	printL(p0);
	
	for(i=0;i<20;i++){
		x=rand()%100+1;
		insertnum(&p1,x);
//410440241 lai peng jun
	} 
	printf("===3-2===\n");
	printL(p1);
	
	printf("===3-3===\n");
	printL(p0);
	printL(p1);

	printf("===3-4===\n");
	p=concatenate(p0,p1);
	printL(p);
	printf("===3-5===\n");
	pinv=invert(p);
	printL(pinv);
	return 0;
//410440241 lai peng jun
}














