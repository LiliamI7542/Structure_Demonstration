#include <stdio.h>
#include <stdlib.h>
//410440241 賴芃君 
typedef struct listNode *listPointer; //這句等於struct listNode * = listPointer
struct listNode{
	int data; //宣稱節點的位置(資料型態為結構的位置)
	listPointer link; 
};
struct stack{
	listPointer top;     //宣稱一個指向stack頂端的位置(資料型態為結構的位置)
}s1,s2,s3;
int empty(struct stack *x){//結構型態的data，因為要存入的東西包含type和pos，結構包含這兩個欄位
	listPointer link;    //宣稱一個尋找下個
    return x->top==NULL;      //如果top等於NULL，就return 1(true)
}
void push(struct stack *x,int item){
    listPointer temp;     //下面要跟系統要空間，要先宣稱一個temp
    temp=(listPointer)malloc(sizeof(struct listNode)); //跟系統要空間
    temp->data=item;      //將要存的item assign給剛剛的temp的data欄位
    if(!empty(x))
        temp->link=x->top;//push temp到最前面，所以將原本的top的位置assign給temp的link。
    else
        temp->link=NULL;
    x->top=temp;          //最後將top指的位置變成最前端。    
}
//410440241 賴芃君 
int pop(struct stack *x){
    listPointer temp;    //定義一個temp要用來暫存目前的top的位置
    temp=x->top;         //將當前的top assign給temp，因為top的位置後面會改變，為了防止改變後找不到top
    int i;    //用來存放要return的data，不然空間釋放掉後會找不到
    if(empty(x)){        //假如本來就空的，直接跳出程式
        printf("stack is empty");
        exit(1);
    }
    i=x->top->data;      //將top的data assign給i
    x->top=x->top->link; //將top的link assign給top，這樣top就變成指向第二個位置，所以前面才要把當前第一個位置給暫存起來
    free(temp);          //將temp(就是第一個位置)給釋放掉。
    return i;            //將i的值(data欄位的值)return回去。
}
//410440241 賴芃君 
void prints(struct stack *x) {
    if (empty(x)) {
        printf("stack is empty\n");
    }
    int X;
    int count=0;
    while (!empty(x)) {
        printf("%2d ", X = pop(&s1));
        push(&s2, X);
    }
    while(!empty(&s2)) {
        push(x, pop(&s2));
    }
    printf("\n");
}
int main(){
//	struct stack S;
	int i;
	int k,m;
	for(i=0;i<30;i++){
		k=rand()%100+1;
		push(&s1,k);
	}
	//410440241 賴芃君 
	prints(&s1);
	printf("第一題：指定m 的數值為頂端算起的第三元素。\n");
	for(i=0;i<3;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第二題：指定m 的數值為頂端算起的第三元素，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	
	printf("第三題：指定m 的數值為頂端算起的第十二元素。\n");
	for(i=0;i<12;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	//410440241 賴芃君 
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第四題：指定m 的數值為頂端算起的第十二元素，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	
	printf("第五題：指定m 的數值為底端。\n");
	for(i=0;i<30;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第六題：指定m 的數值為底端，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	//410440241 賴芃君 
	printf("第七題：指定m 的數值為底端算起的第二元素。 \n");
	for(i=0;i<29;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第八題：指定m 的數值為底端算起的第二元素，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	//410440241 賴芃君 
	printf("第九題：指定m 的數值為底端算起的第三元素。\n");
	for(i=0;i<28;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第十題：指定m 的數值為底端算起的第三元素，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	//410440241 賴芃君 
	printf("第十一題：指定m 的數值為底端算起的第四元素。\n");
	for(i=0;i<27;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m值=%d\n",m);
	printf("此時堆疊為:");
	prints(&s1);
	printf("第十二題：指定m 的數值為底端算起的第四元素，且不改變堆疊。\n");
	printf("m值=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("此時堆疊為:");
	prints(&s1);
	return 0;
}
