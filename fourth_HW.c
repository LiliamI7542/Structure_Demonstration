#include <stdio.h>
#include <stdlib.h>
//410440241 lai peng jun



typedef struct listNode *listPointer;
struct listNode {
    int data;
    listPointer link;
};

//410440241 lai peng jun
void insertnum(listPointer *p,int x){
    listPointer temp,r,q;
    temp = (listPointer)malloc(sizeof(struct listNode));
    temp->data=x;
    q=*p;

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

//410440241 lai peng jun
listPointer concatenate(listPointer list1, listPointer list2){
    listPointer temp;
    if(!list1)
        return list2;
    if(!list2)
        return list1;
        
    temp=list1;
    while(temp->link!=NULL){
    	temp=temp->link;
    }
    temp->link=list2;
    return list1;
}

void printL(listPointer p){
    listPointer temp=p;
    while(temp!=NULL){
        printf("%d,",temp->data);
        temp=temp->link;
    }    
}

//410440241 lai peng jun
listPointer Lin2Cir(listPointer p){
    listPointer temp;
    temp=p;
    while(temp->link!=NULL){
    	temp=temp->link;
    }
    temp->link=p;
    return temp;
}

//410440241 lai peng jun
void printC(listPointer p){
    listPointer temp;
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
}

//410440241 lai peng jun
int cdelete(listPointer *p){
    listPointer temp = NULL;
    int x;
    x=(*p)->data;
    temp=*p;
    if(temp->link!=(*p) && temp->link != NULL)
        *p=temp->link;
	free(temp);
    return x;
}

//410440241 lai peng jun
int ldelete(listPointer p) {
	listPointer current = p;
	listPointer temp;
	while(current->link != NULL) {
		if(current->data % 2 == 0) {
			temp->link = temp->link->link;
			return current->data;
		} else {
			temp = temp->link;
		}
	}
}

int main(void) {
	printf("410440241 lai peng jun\n");
	int i, x, m, a;
	listPointer list, list_even, list_odd;
	list = NULL;
	list_even = NULL;
	list_odd = NULL;
	//1.
	printf("================4-2-1==================\n");
	for(i = 0; i < 80; i++) {
		x = rand() % 100;
		insertnum(&list, x);
	}
	printL(list);
	printf("\n\n");
	
	
	
	//2.
	printf("================4-2-2==================\n");
	list = invert(list);
	printL(list);
//410440241 lai peng jun
	printf("\n\n");
	
	list = invert(list);
	
	//3.
	printf("================4-2-3==================\n");
	for(i = 0; i < 80; i++){
		a = cdelete(&list);
		if(a % 2 == 0) {
			insertnum(&list_even, a);
		} else {
			insertnum(&list_odd, a);
		}
	}
	printL(list_even);
	printf("\n");
	printL(list_odd);
	printf("\n\n");
	
	
	//4.
	printf("================4-2-4==================\n");
	list = concatenate(list_even, list_odd);
	printL(list);
	printf("\n\n");
	
	//5.
	printf("================4-2-5==================\n");
	list = Lin2Cir(list);
	printC(list);
	printf("\n\n");
	
	//6.
	printf("================4-2-6==================\n");
//while(list->link != list) {
	for(i = 0; i < 80; i++) {
		int count = 8;
		//listPointer temp = NULL;
		//temp = list;
		while(count != 0) {
			list = list->link;
			count--;
		}
		printf("%d ", cdelete(&list));
	}
	//printL(list_even);
	
	
	return 0;
//410440241 lai peng jun
}

