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
 	link_list_t pdel=NULL;//ָ��ɾ���ڵ�
	link_list_t pnew=NULL;//ָ���´����ڵ�
	link_list_t ptail=NULL;//ָ��ǰ����β
	link_list_t h=NULL;//ͷָ��
	
	int all_num=7;//��������
	int start_num=2;//�Ӽ��ź��ӿ�ʼ
	int kill_num=3;//������ɱ��
	printf("���� ��˭��ʼ ������\n");
	scanf("%d%d%d",&all_num,&start_num,&kill_num);
	
	//1.��������ѭ������
	//��1��������������	
	h=(link_list_t) malloc(sizeof(link_node_t));
	if(h==NULL){
		printf("error\n");
		return -1;
	}
	h->data=1;//��һ���ڵ㸳ֵ 
	h->next=NULL;
	
	//βָ��ָ��ǰ��һ���ڵ�
	ptail=h;
	
	for(i=2;i<=all_num;i++){
		//�����½ڵ� 
		pnew=(link_list_t) malloc(sizeof(link_node_t));
		if(pnew==NULL){
			printf("error\n");
			return -1;
		}
		//���½�㸳ֵ
		pnew->data=i;
		pnew->next=NULL;
		//�½ڵ����ӵ���β
		ptail->next=pnew;
		ptail=pnew;
	}
	//(2)��ͷָ�뱣�浽����β�γɵ���ѭ������
	ptail->next=h; 
	/*
	while(1)
	{
		printf("%d\n",h->data);
		h=h->next;
		sleep(1);
	}
	*/
	
	//2.��ʼɱ���� 
	//��1��ͷָ���Ƶ���ʼ���ӵĺ��봦 
	for(i=0;i<start_num-1;i++){
		h=h->next;
	}
	//(2)ѭ��ɱ����
	while(h!=h->next){//ѭ��ָ���Լ���ֻʣһ���ڵ� 
		//ͷָ���Ƶ���ɾ���ڵ�ǰһ���ڵ� 
		for(i=0;i<kill_num-1-1;i++){
			h=h->next;
		} 
		pdel=h->next;
		//�����ɾ���ڵ�
		h->next=pdel->next;
		printf("kill is %d\n",pdel->data);
		free(pdel);
		pdel=NULL;
		//����һ���ڵ����
		h=h->next; 
	} 
	printf("king id =======%d\n",h->data);
 	return 0;
 }
 
 
 
 
