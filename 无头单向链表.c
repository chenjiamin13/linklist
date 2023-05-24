#include <stdio.h>

typedef struct node_t
{
	char data;//数据域 
	struct node_t *next;//指针域，指向自身 
	//结构体类型	存放下一个节点的地址 
 } Linknode_t,*linklist_t; 
 /*
 linklist_t 等同于struct node_t*（结构体指针类型） 
 Linknode_t 等同于struct node_t  （结构体类型） 
 linklist_t p等同于 Linknode_t *p
 
  linklist_t p= struct node_t* p
  Linknode_t A=struct node_t A
  linklist_t p=Linknode_t *p
 */
 int main()
 {
 	//1.定义4个节点 
 	Linknode_t A={'A',NULL};
 	Linknode_t B={'B',NULL};
 	Linknode_t C={'C',NULL};
 	Linknode_t D={'D',NULL};
 	
 	//2.将四个节点连起来
	A.next=&B;
	B.next=&C;
	C.next=&D;
	
 	//3.定义一个头指针
	linklist_t h=&A; 
	
	//4.遍历无头单向链表
	while(h!=NULL){
		printf("%c ",h->data);
		h=h->next;
	}
 	return 0; 
 }
 
 
 
 
