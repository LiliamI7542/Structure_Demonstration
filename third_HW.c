#include <stdio.h>
#include <stdlib.h>
//410440241 ��ˢ�g 
typedef struct listNode *listPointer; //�o�y����struct listNode * = listPointer
struct listNode{
	int data; //�źٸ`�I����m(��ƫ��A�����c����m)
	listPointer link; 
};
struct stack{
	listPointer top;     //�ź٤@�ӫ��Vstack���ݪ���m(��ƫ��A�����c����m)
}s1,s2,s3;
int empty(struct stack *x){//���c���A��data�A�]���n�s�J���F��]�ttype�Mpos�A���c�]�t�o������
	listPointer link;    //�ź٤@�ӴM��U��
    return x->top==NULL;      //�p�Gtop����NULL�A�Nreturn 1(true)
}
void push(struct stack *x,int item){
    listPointer temp;     //�U���n��t�έn�Ŷ��A�n���ź٤@��temp
    temp=(listPointer)malloc(sizeof(struct listNode)); //��t�έn�Ŷ�
    temp->data=item;      //�N�n�s��item assign����誺temp��data���
    if(!empty(x))
        temp->link=x->top;//push temp��̫e���A�ҥH�N�쥻��top����massign��temp��link�C
    else
        temp->link=NULL;
    x->top=temp;          //�̫�Ntop������m�ܦ��̫e�ݡC    
}
//410440241 ��ˢ�g 
int pop(struct stack *x){
    listPointer temp;    //�w�q�@��temp�n�ΨӼȦs�ثe��top����m
    temp=x->top;         //�N��e��top assign��temp�A�]��top����m�᭱�|���ܡA���F������ܫ�䤣��top
    int i;    //�ΨӦs��nreturn��data�A���M�Ŷ����񱼫�|�䤣��
    if(empty(x)){        //���p���ӴN�Ū��A�������X�{��
        printf("stack is empty");
        exit(1);
    }
    i=x->top->data;      //�Ntop��data assign��i
    x->top=x->top->link; //�Ntop��link assign��top�A�o��top�N�ܦ����V�ĤG�Ӧ�m�A�ҥH�e���~�n���e�Ĥ@�Ӧ�m���Ȧs�_��
    free(temp);          //�Ntemp(�N�O�Ĥ@�Ӧ�m)�����񱼡C
    return i;            //�Ni����(data��쪺��)return�^�h�C
}
//410440241 ��ˢ�g 
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
	//410440241 ��ˢ�g 
	prints(&s1);
	printf("�Ĥ@�D�G���wm ���ƭȬ����ݺ�_���ĤT�����C\n");
	for(i=0;i<3;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�ĤG�D�G���wm ���ƭȬ����ݺ�_���ĤT�����A�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	
	printf("�ĤT�D�G���wm ���ƭȬ����ݺ�_���ĤQ�G�����C\n");
	for(i=0;i<12;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	//410440241 ��ˢ�g 
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�ĥ|�D�G���wm ���ƭȬ����ݺ�_���ĤQ�G�����A�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	
	printf("�Ĥ��D�G���wm ���ƭȬ����ݡC\n");
	for(i=0;i<30;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�Ĥ��D�G���wm ���ƭȬ����ݡA�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	//410440241 ��ˢ�g 
	printf("�ĤC�D�G���wm ���ƭȬ����ݺ�_���ĤG�����C \n");
	for(i=0;i<29;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�ĤK�D�G���wm ���ƭȬ����ݺ�_���ĤG�����A�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	//410440241 ��ˢ�g 
	printf("�ĤE�D�G���wm ���ƭȬ����ݺ�_���ĤT�����C\n");
	for(i=0;i<28;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�ĤQ�D�G���wm ���ƭȬ����ݺ�_���ĤT�����A�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	//410440241 ��ˢ�g 
	printf("�ĤQ�@�D�G���wm ���ƭȬ����ݺ�_���ĥ|�����C\n");
	for(i=0;i<27;i++){
		if(empty(&s1)){
			printf("%d-element stack",i);
			exit(3);
		}
		push(&s2,m=pop(&s1));
	}
	printf("m��=%d\n",m);
	printf("���ɰ��|��:");
	prints(&s1);
	printf("�ĤQ�G�D�G���wm ���ƭȬ����ݺ�_���ĥ|�����A�B�����ܰ��|�C\n");
	printf("m��=%d\n",m);
	while(!empty(&s2))
		push(&s1,pop(&s2));
	printf("���ɰ��|��:");
	prints(&s1);
	return 0;
}
