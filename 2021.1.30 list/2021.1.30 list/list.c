#include<stdio.h>
#include<stdlib.h>
typedef int LDataType;
//����ڵ�:����+ָ��
 typedef struct listNode
{
	LDataType _data;
	struct listNode* _next;
}listNode;

//����
 typedef struct list
 {
	 //�����һ���ڵ�ĵ�ַ
	 listNode* _head;
 }list;

 listNode* creatListNode(LDataType val)
 {
	 listNode* node = (listNode*)malloc(sizeof(listNode));
	 node->_data = val;
	 node->_next = NULL;
	 return node;
 }

 //��ʼ��
 void listInit(list* lst)
 {
	 //��ʼ��Ϊ������
	 if (lst == NULL)
		 return;
	 lst->_head = NULL;
 }
 //β��:O(n)
 void listPushBack(list* lst, LDataType val)
 {
	 if (lst == NULL)
		 return;
	 if (lst->_head == NULL)
	 {
		 //�����һ���ڵ�
		 lst->_head = creatListNode(val);
	 }
	 else
	 {
		 //�ӵ�һ���ڵ㿪ʼ�������ҵ����һ��
		 listNode* tail = lst->_head;
		 while (tail->_next != NULL)
		 {
			 tail = tail->_next;
		 }
		 tail->_next = creatListNode(val);
	 }
 }

 //βɾ:O(n)
 void listPopBack(list* lst)
 {
	 if (lst == NULL || lst->_head == NULL)
		 return;
	 //�������ҵ����һ���ڵ�
	 struct listNode* prev = NULL;
	 struct listNode* tail = lst->_head;
	 while (tail->_next != NULL)
	 {
		 prev = tail;
		 tail = tail->_next;
	 }
	 //�ͷ����һ���ڵ�
	 free(tail);
	 //����next
	 if (prev==NULL)
	// if (lst->_head->_next == NULL)//ֻ��һ���ڵ㣬����head
		 lst->_head = NULL;
	 else
	 prev->_next = NULL;
 }

 //ͷ��:O(1)
 //����һ���ڵ㣬�޸�����ָ��
 void listPushFront(list* lst, LDataType val)
 {
	 if (lst == NULL)
		 return;
	 //�����ڵ�
	struct listNode* node = creatListNode(val);
	 node->_next = lst->_head;
	 lst->_head = node;
 }

 //ͷɾ:O(1)
 void listPopFront(list* lst)
 {
	 if (lst == NULL || lst->_head == NULL)
		 return;
	 struct listNode* next = lst->_head->_next;
	 free(lst->_head);
	 lst->_head = next;
 }
 void lstInsertAfter(listNode* node, LDataType val)
 {
	 if (node == NULL)
		 return;
	struct listNode* newNode = creatListNode(val);
	 //node  newNode next
	struct listNode* next = node->_next;
	 node->_next = newNode;
	 newNode->_next = next;
 }
 //ɾ����ɾ���λ�õ���һ���ڵ�
 void listEraseAfter(listNode* node)
 {
	 if (node == NULL || node->_next == NULL)
		 return;
	struct listNode* next = node->_next;
	 struct listNode* nextnext = next->_next;

	 //�ͷ�next
	 free(next);
	 node->_next = nextnext;

 }

 struct listNode* listFind(list* lst, LDataType val)
 {
	 if (lst == NULL || lst->_head == NULL)
		 return NULL;
	 struct listNode* cur = lst->_head;
	 while (cur)
	 {
		 if (cur->_data == val)
			 return cur;
		 cur = cur->_next;
	 }
	 return NULL;
 }
 void listDestroy(list* lst)
 {
	 //�ͷŵ�ǰ�ڵ㣬������һ���ڵ�
	 if (lst == NULL)
		 return;
	 struct listNode* cur = lst->_head;
	 while (cur)
	 {
		 struct listNode* next = cur->_next;
		 free(cur);
		 cur = next;
	 }
	 lst->_head = NULL;
 }
 void test()
 {
	 list lst;//��ʼ��
	 listInit(&lst);
	 listPushFront(&lst, 5);
	 listPushFront(&lst, 4);
	 listPushFront(&lst, 3);
	 listPushFront(&lst, 2);
	 listPushFront(&lst, 1);
 }
 int main()
 {
	 test();
	 return 0;
 }


