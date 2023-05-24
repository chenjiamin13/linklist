#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
	int data;
	struct node_t *next;
 }link_node_t,*link_list_t;
 
 int main()
 {
 	int i;
 	link_list_t pdel=NULL;//指向被删除节点
	link_list_t pnew=NULL;//指向新创建节点
	link_list_t ptail=NULL;//指向当前链表尾
	link_list_t h=NULL;//头指针
	
	int all_num=7;//猴子总数
	int start_num=2;//从几号猴子开始
	int kill_num=3;//数到几杀死
	printf("总数 从谁开始 数到几\n");
	scanf("%d%d%d",&all_num,&start_num,&kill_num);
	
	//1.创建单向循环链表
	//（1）创建单向链表	
	h=(link_list_t) malloc(sizeof(link_node_t));
	if(h==NULL){
		printf("error\n");
		return -1;
	}
	h->data=1;//第一个节点赋值 
	h->next=NULL;
	
	//尾指针指向当前第一个节点
	ptail=h;
	
	for(i=2;i<=all_num;i++){
		//创建新节点 
		pnew=(link_list_t) malloc(sizeof(link_node_t));
		if(pnew==NULL){
			printf("error\n");
			return -1;
		}
		//给新结点赋值
		pnew->data=i;
		pnew->next=NULL;
		//新节点链接到表尾
		ptail->next=pnew;
		ptail=pnew;
	}
	//(2)把头指针保存到链表尾形成单向循环链表
	ptail->next=h; 
	/*
	while(1)
	{
		printf("%d\n",h->data);
		h=h->next;
		sleep(1);
	}
	*/
	
	//2.开始杀猴子 
	//（1）头指针移到开始猴子的号码处 
	for(i=0;i<start_num-1;i++){
		h=h->next;
	}
	//(2)循环杀猴子
	while(h!=h->next){//循环指到自己，只剩一个节点 
		//头指针移到被删除节点前一个节点 
		for(i=0;i<kill_num-1-1;i++){
			h=h->next;
		} 
		pdel=h->next;
		//跨过被删除节点
		h->next=pdel->next;
		printf("kill is %d\n",pdel->data);
		free(pdel);
		pdel=NULL;
		//从下一个节点继续
		h=h->next; 
	} 
	printf("king id =======%d\n",h->data);
 	return 0;
 }
 
 
 
 
