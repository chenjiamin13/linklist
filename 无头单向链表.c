#include <stdio.h>

typedef struct node_t
{
	char data;//������ 
	struct node_t *next;//ָ����ָ������ 
	//�ṹ������	�����һ���ڵ�ĵ�ַ 
 } Linknode_t,*linklist_t; 
 /*
 linklist_t ��ͬ��struct node_t*���ṹ��ָ�����ͣ� 
 Linknode_t ��ͬ��struct node_t  ���ṹ�����ͣ� 
 linklist_t p��ͬ�� Linknode_t *p
 
  linklist_t p= struct node_t* p
  Linknode_t A=struct node_t A
  linklist_t p=Linknode_t *p
 */
 int main()
 {
 	//1.����4���ڵ� 
 	Linknode_t A={'A',NULL};
 	Linknode_t B={'B',NULL};
 	Linknode_t C={'C',NULL};
 	Linknode_t D={'D',NULL};
 	
 	//2.���ĸ��ڵ�������
	A.next=&B;
	B.next=&C;
	C.next=&D;
	
 	//3.����һ��ͷָ��
	linklist_t h=&A; 
	
	//4.������ͷ��������
	while(h!=NULL){
		printf("%c ",h->data);
		h=h->next;
	}
 	return 0; 
 }
 
 
 
 
