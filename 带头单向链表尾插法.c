#include <stdio.h>
#include <stdlib.h>

typedef struct node_t
{
	int data;//������ 
	struct node_t *next;//ָ���� 
}link_node_t,*link_list_t;

int main()
{
	int score;//��ѧ���ɼ�
	link_list_t pnew=NULL; //ָ���½ڵ� 
	link_list_t ptail=NULL;//βָ�롣ָ��ǰ����β��
	
	//1.����ͷ�ڵ�
	link_list_t h=(link_list_t)malloc(sizeof(link_node_t));
	if(h==NULL){
		printf("error\n");
		return -1;
	}
	h->next=NULL;//����һ����ͷ	
	ptail=h;
	
	// ѭ������ɼ�����-1ֹͣ
	while(1){
		//(1)����ѧ���ɼ�
		scanf("%d",&score); 
		if(score==-1){
			break;
		}
		//(2)�����µĽڵ㱣��ѧ���ɼ�
		pnew=(link_list_t)malloc(sizeof(link_node_t));
		if(pnew==NULL){
			printf("error\n");
			return -1;
		}
		//���´������������ָ����ֵ
		pnew->data=score; 
		pnew->next=NULL;
		//(3)��pnewָ���µĽڵ㣬���ӵ�����β
		ptail->next=pnew; //�½ڵ����ӵ���β 
		ptail=pnew;//ptailָ��ǰ�����β������������ 
		
		//ptail=ptail->next; //������������������ 
	} 
	
	//3.������ͷ�ĵ�������
	while(h->next!=NULL){
		h=h->next;
		printf("%d ",h->data);
	} 
	
	return 0;
 } 





