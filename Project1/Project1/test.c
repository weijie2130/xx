//三子棋游戏
//#include"game.h"
#include<stdio.h>
//菜单 ，是否要一直玩下去
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
		printf("请输入你的选择：")；
		scanf("%d", &intput);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 2:
			printf("退出游戏\n")；
				break;
		default:
			printf("选择错误\n")；
				break;
		}while (intput)//只要是1就一直执行；
			return 0;
	} 