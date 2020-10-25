#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------------\n");
	//�кŵĴ�ӡ
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------\n");
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	//1.���������
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//����һ���ף�count--
		//�������һ���ף�����һ�����������1-9 ��1-9
		int x = rand() % row+1;//ģ9�õ�0-8
		int y = rand() % row + 1;
		//2.����
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}

}

 int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	 return mine[x-1][y] +
		 mine[x-1][y-1] +
		 mine[x-1][y+1] +
		 mine[x][y-1] +
		 mine[x][y+1] +
		 mine[x+1][y-1] +
		 mine[x + 1][y] +
		 mine[x + 1][y+1] - 8 * '0';//ASCAL���ֵ
		 
}
 //ɨ����ν�����
 //1.ը��
 //2.ɨ�׳ɹ�



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{

	int x = 0;
	int y = 0;
	int win = 0;
	while (win<ROW*COL - EASY_COUNT)
	{
		printf("������Ҫ�Ų���׵����꣺>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			//�ж�x,y���괦�Ƿ�����
			if (mine[x][y] == '1')
			{
				printf("�㱻ը����\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				//x,y���괦�����ף�ͳ����Χ�м�����
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����Ƿ�\n");
		}
	}
	if (win == ROW*COL - EASY_COUNT)
	{
		printf("��ϲ������Ϸ�ɹ�\n");
		DisplayBoard(mine, row, col);
	}



}