#include "stdafx.h"
#include "CLinkList.h"
//����һ���ڵ�
NODE * CL_MakeNode(int whotalk,char *p,int color)
{
	NODE *node=new NODE;
	node->whotalk=whotalk;
	strcpy_s(node->message,p);
	node->color=color;
	node->prev=NULL;
	node->next=NULL;
	return node;
}
//�ͷ�һ���ڵ�
void CL_FreeNode(NODE *node)
{
	if(node!=NULL)
		delete node;
}
//��ʼ������
void CL_InitList(CLLIST &list)
{
	list.head=NULL;
	list.tail=NULL;
	list.len=0;
}
//������ͷ�����һ���ڵ�
void CL_AddHead(CLLIST &list,NODE *node)
{
	if(list.len<MAXLINKLEN){
		if(list.len>0){
			NODE *p=list.head;
			list.head=node;
			node->prev=NULL;
			node->next=p;
			p->prev=node;
		}
		else{
			list.head=node;
			list.tail=node;
			node->prev=NULL;
			node->next=NULL;
		}
		list.len++;
	}
}
//������β�����һ���ڵ�
void CL_AddTail(CLLIST &list,NODE *node)
{
	if(list.len<MAXLINKLEN){
		if(list.len>0){
			NODE *p=list.tail;
			list.tail=node;
			node->next=NULL;
			node->prev=p;
			p->next=node;
		}
		else{
			list.head=node;
			list.tail=node;
			node->prev=NULL;
			node->next=NULL;
		}
		list.len++;
	}
}
//������ͷ��ȡһ���ڵ�
NODE * CL_GetHead(CLLIST &list)
{
	NODE *p=NULL;
	if(list.len>0){
		p=list.head;
		if(p->next!=NULL)
			list.head=p->next;
		else{
			list.head=NULL;
			list.tail=NULL;
		}
		list.len--;
	}
	return p;
}
//������β��ȡһ���ڵ�
NODE * CL_GetTail(CLLIST &list)
{
	NODE *p=NULL;
	if(list.len>0){
		p=list.tail;
		if(p->prev!=NULL)
			list.tail=p->prev;
		else{
			list.head=NULL;
			list.tail=NULL;
		}
		list.len--;
	}
	return p;
}
//ȡ����Ľڵ����
int CL_GetLength(CLLIST &list)
{
	return list.len;
}
//�����Ƿ�Ϊ��
BOOL CL_IsEmpty(CLLIST &list)
{
	if(list.len==0)
		return TRUE;
	else
		return FALSE;
}
//�����Ƿ�����
BOOL CL_IsFull(CLLIST &list)
{
	if(list.len==MAXLINKLEN)
		return TRUE;
	else
		return FALSE;
}
//��������
void CL_Destroy(CLLIST &list)
{
	int i;
	NODE *p;
	for(i=0;i<list.len;i++){
		p=CL_GetHead(list);
		CL_FreeNode(p);
	}
	CL_InitList(list);
}

