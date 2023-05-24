#include <stdio.h>
#include <stdlib.h>
 
 //节点 
typedef struct node_t
{
	char data;//数据域 
	struct node_t *next;//指针域，指向自身 
	//结构体类型	存放下一个节点的地址 
 } Linknode_t,*linklist_t; 

 int main()
 {
 	//1.创建头节点
	linklist_t h=(linklist_t) malloc(sizeof(Linknode_t));
	if(h==NULL){
		printf("error\n");
		return -1; 
	}
	
 	//2.定义4个节点 
 	Linknode_t A={'A',NULL};
 	Linknode_t B={'B',NULL};
 	Linknode_t C={'C',NULL};
 	Linknode_t D={'D',NULL};
 	
 	//3.将四个节点连起来
	A.next=&B;
	B.next=&C;
	C.next=&D;
	h->next=NULL;//创建一个空头 
	h->next=&A; 
	
	//5.遍历有头单向链表
	while(h->next!=NULL){
		h=h->next;
		printf("%c ",h->data);
	}
	
	printf("\n");
	//改成无头
	h=h->next;
	while(h!=NULL){
		printf("%c ",h->data);
		h=h->next;
	} 
	
 	return 0; 
 }
 
 
 
 
