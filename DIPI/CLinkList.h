
#pragma once

#define MAXLINKLEN 20			//�������󳤶�
typedef struct _NODE{
	int whotalk;
	char message[255];
	int color;
	_NODE *prev;			//ָ���������һ���ڵ�
	_NODE *next;			//ָ����һ���ڵ�
}NODE,*PNODE;
typedef struct _CLLIST{
	NODE *head;				//ָ��ͷ�ڵ��ָ��
	NODE *tail;				//ָ��β�ڵ��ָ��
	int len;				//��������Ľڵ����
}CLLIST;


//����һ���ڵ�
NODE * CL_MakeNode(int whotalk,char *p,int color);
//�ͷ�һ���ڵ�
void CL_FreeNode(NODE *node);
//��ʼ������
void CL_InitList(CLLIST &list);
//������ͷ�����һ���ڵ�
void CL_AddHead(CLLIST &list,NODE *node);
//������β�����һ���ڵ�
void CL_AddTail(CLLIST &list,NODE *node);
//������ͷ��ȡһ���ڵ�
NODE * CL_GetHead(CLLIST &list);
//������β��ȡһ���ڵ�
NODE * CL_GetTail(CLLIST &list);
//ȡ����Ľڵ����
int CL_GetLength(CLLIST &list);
//�����Ƿ�Ϊ��
BOOL CL_IsEmpty(CLLIST &list);
//�����Ƿ�����
BOOL CL_IsFull(CLLIST &list);
//��������
void CL_Destroy(CLLIST &list);

