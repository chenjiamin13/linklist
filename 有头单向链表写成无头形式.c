#include <stdio.h>
#include <stdlib.h>
 
 //�ڵ� 
typedef struct node_t
{
	char data;//������ 
	struct node_t *next;//ָ����ָ������ 
	//�ṹ������	�����һ���ڵ�ĵ�ַ 
 } Linknode_t,*linklist_t; 

 int main()
 {
 	//1.����ͷ�ڵ�
	linklist_t h=(linklist_t) malloc(sizeof(Linknode_t));
	if(h==NULL){
		printf("error\n");
		return -1; 
	}
	
 	//2.����4���ڵ� 
 	Linknode_t A={'A',NULL};
 	Linknode_t B={'B',NULL};
 	Linknode_t C={'C',NULL};
 	Linknode_t D={'D',NULL};
 	
 	//3.���ĸ��ڵ�������
	A.next=&B;
	B.next=&C;
	C.next=&D;
	h->next=NULL;//����һ����ͷ 
	h->next=&A; 
	
	//5.������ͷ��������
	while(h->next!=NULL){
		h=h->next;
		printf("%c ",h->data);
	}
	
	printf("\n");
	//�ĳ���ͷ
	h=h->next;
	while(h!=NULL){
		printf("%c ",h->data);
		h=h->next;
	} 
	
 	return 0; 
 }
 
 
 
 
