// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <iostream>
#include <vector>

unsigned short SetConsoleColor(unsigned short ForeColor, unsigned short BackGroundColor);

inline std::ostream&  red(std::ostream& ostr)
{
	SetConsoleColor(FOREGROUND_RED, 0);
	return ostr;
}

inline std::ostream&  white(std::ostream& ostr)
{
	SetConsoleColor(FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE, 0);
	return ostr;
}

void print(int a[], int n, int highlight);

const int MAX = 0x0FFFFFFF;

template<int N>
void print(int m[][N], int n) {
	for (int i = 0; i < n; i++)
	{
			cout << "{ ";
		for (int j = 0; j < n; j++)
		{
			if(m[i][j] == MAX)
			{
				cout << "MAX,";
			}
			else
			{
				cout << m[i][j] << ",";

			}
				cout << "\t";
		}
		cout << "}\n";

	}
	cout << '\n';
}


inline std::ostream&  operator <<(std::ostream& ostr, const std::vector<int>& v)
{
    ostr << '[';
    for (std::vector<int>::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        ostr << *i;
        ostr << ',';
    }
    ostr << ']';
    return ostr;
}
