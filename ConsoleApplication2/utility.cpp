// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "utility.h"

using namespace std;



unsigned short SetConsoleColor(unsigned short ForeColor, unsigned short BackGroundColor)
{
	CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
	if (!GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbiInfo))
	{
		printf("GetConsoleScreenBufferInfo error!\n");
		return 0;
	}
	if (!SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ForeColor | BackGroundColor))
	{
		printf("SetConsoleTextAttribute error!\n");
		return 0;
	}
	return csbiInfo.wAttributes;
}


void print(int a[], int n, int highlight) {
	for (int j = 0; j < n; j++)
	{
		if (j == highlight)
		{
			cout << red << a[j] << " ";
		}
		else
		{
			cout << white << a[j] << " ";
		}

	}
	cout << endl;
}





