//ɨ����Ϸ
#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu()
{
	printf("************\n");
	printf("***1.play***\n");
	printf("***0.exit***\n");
	printf("************\n");


}void game()
{
	//����ɨ�׵Ĺ���
	//������������
	//��Ų��úõ���
	char mine[ROWS][COLS] = { 0 };//'0'

	//����Ų����������Ϣ
	char show[ROWS][COLS] = { 0 };//'*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);
//	DisplayBoard(mine, ROW, COL);
	//1.������
	SetMine(mine, ROW, COL);
	/*DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);*/
	//2.ɨ��
	FindMine(mine, show, ROW, COL);
}


int main()
{
	int input=0;
	srand((unsigned int)time(NULL));//������������������
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	}
	while (input);
	return 0;
}