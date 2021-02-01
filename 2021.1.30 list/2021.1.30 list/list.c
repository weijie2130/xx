#include<stdio.h>
#include<stdlib.h>
typedef int LDataType;
//定义节点:数据+指针
 typedef struct listNode
{
	LDataType _data;
	struct listNode* _next;
}listNode;

//链表
 typedef struct list
 {
	 //保存第一个节点的地址
	 listNode* _head;
 }list;

 listNode* creatListNode(LDataType val)
 {
	 listNode* node = (listNode*)malloc(sizeof(listNode));
	 node->_data = val;
	 node->_next = NULL;
	 return node;
 }

 //初始化
 void listInit(list* lst)
 {
	 //初始化为空链表
	 if (lst == NULL)
		 return;
	 lst->_head = NULL;
 }
 //尾插:O(n)
 void listPushBack(list* lst, LDataType val)
 {
	 if (lst == NULL)
		 return;
	 if (lst->_head == NULL)
	 {
		 //插入第一个节点
		 lst->_head = creatListNode(val);
	 }
	 else
	 {
		 //从第一个节点开始遍历，找到最后一个
		 listNode* tail = lst->_head;
		 while (tail->_next != NULL)
		 {
			 tail = tail->_next;
		 }
		 tail->_next = creatListNode(val);
	 }
 }

 //尾删:O(n)
 void listPopBack(list* lst)
 {
	 if (lst == NULL || lst->_head == NULL)
		 return;
	 //遍历，找到最后一个节点
	 struct listNode* prev = NULL;
	 struct listNode* tail = lst->_head;
	 while (tail->_next != NULL)
	 {
		 prev = tail;
		 tail = tail->_next;
	 }
	 //释放最后一个节点
	 free(tail);
	 //更新next
	 if (prev==NULL)
	// if (lst->_head->_next == NULL)//只有一个节点，更新head
		 lst->_head = NULL;
	 else
	 prev->_next = NULL;
 }

 //头插:O(1)
 //创建一个节点，修改两个指向
 void listPushFront(list* lst, LDataType val)
 {
	 if (lst == NULL)
		 return;
	 //创建节点
	struct listNode* node = creatListNode(val);
	 node->_next = lst->_head;
	 lst->_head = node;
 }

 //头删:O(1)
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
 //删除是删这个位置的下一个节点
 void listEraseAfter(listNode* node)
 {
	 if (node == NULL || node->_next == NULL)
		 return;
	struct listNode* next = node->_next;
	 struct listNode* nextnext = next->_next;

	 //释放next
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
	 //释放当前节点，保存下一个节点
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
	 list lst;//初始化
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


