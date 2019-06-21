// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "utility.h"

using namespace std;





const int map_size = 6;

void Dijkstra(int map[][map_size])
{
    int shortDistance[map_size]= { 0};
    for (int i = 1; i < map_size; ++i)
    {
        shortDistance[i] = MAX;

    }

    int path[map_size] = {0};

    for(int i = 0; i < map_size; ++i)
	{
        for (int j = 0; j < map_size; ++j)
        {
            if (shortDistance[j] > shortDistance[i] + map[i][j])
            {
                shortDistance[j] = shortDistance[i] + map[i][j];
                path[j] = i+1;
            }
        }
	}
    print(shortDistance, sizeof(shortDistance) / sizeof(int), 100);
    print(path, sizeof(path) / sizeof(int), 100);
}


