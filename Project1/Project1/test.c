//��������Ϸ
//#include"game.h"
#include<stdio.h>
//�˵� ���Ƿ�Ҫһֱ����ȥ
void menu()
{
	printf("****************");
	printf("**   1.p1ay   **\n");
	printf("**   2.exit   **\n");
	printf("****************\n");

}	
void game()
{
}

int main()
{
	int intput = 0;
	do
	{
		menu();
		printf("���������ѡ��")��
		scanf("%d", &intput);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 2:
			printf("�˳���Ϸ\n")��
				break;
		default:
			printf("ѡ�����\n")��
				break;
		}while (intput)//ֻҪ��1��һֱִ�У�
			return 0;
	} 