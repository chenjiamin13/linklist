#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
	int data;//数据域 
	struct node_t *next;//指针域 
}link_node_t,*link_list_t;

int main()
{
	int score;//存学生成绩
	link_list_t pnew=NULL; //指向新节点 
	link_list_t ptail=NULL;//尾指针。指向当前链表尾巴
	
	//1.创建头节点
	link_list_t h=(link_list_t)malloc(sizeof(link_node_t));
	if(h==NULL){
		printf("error\n");
		return -1;
	}
	h->next=NULL;//创建一个空头	
	ptail=h;
	
	// 循环输入成绩，到-1停止
	while(1){
		//(1)输入学生成绩
		scanf("%d",&score); 
		if(score==-1){
			break;
		}
		//(2)创建新的节点保存学生成绩
		pnew=(link_list_t)malloc(sizeof(link_node_t));
		if(pnew==NULL){
			printf("error\n");
			return -1;
		}
		//对新创建的数据域和指针域赋值
		pnew->data=score; 
		pnew->next=NULL;
		//(3)将pnew指向新的节点，连接到链表尾
		ptail->next=pnew; //新节点链接到表尾 
		ptail=pnew;//ptail指向当前链表表尾，链表长度增加 
		
		//ptail=ptail->next; //上面这句可以用这个替代 
	} 
	
	//3.遍历有头的单向链表
	while(h->next!=NULL){
		h=h->next;
		printf("%d ",h->data);
	} 
	
	return 0;
 } 





