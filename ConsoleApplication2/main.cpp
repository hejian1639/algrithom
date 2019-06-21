// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <vector>
#include "utility.h"
#include <map>

using namespace std;



void print(int a[], int n, int highlight);


void InsertSort(int a[], int n);
void HeapSort(int a[], int n);
void QuickSort(int a[], int n);
void MergeSort(int a[], int n);


const int map_size = 6;
int pathMap[][map_size] =
{
    { 0,	7,		9,		MAX,	MAX,	14 },
    { 7,	0,		10,		15,		MAX,	MAX },
    { 9,	10,		0,		11,		MAX,	2 },
    { MAX,	15,		11,		0,		6,		MAX },
    { MAX,	MAX,	MAX,	6,		0,		9 },
    { 14,	MAX,	2,		MAX,	9,		0 },

};


void Dijkstra(int map[][map_size]);
void Floyd(int map[][map_size]);

vector<int> GetCoins(int value);

namespace dynamic
{
    vector<int> GetCoins(int value);
}



int main()
{
    int a[] = { 3,1,5,7,2,4,9,6,8 };
    MergeSort(a, sizeof(a) / sizeof(int));
    print(a, sizeof(a) / sizeof(int), 100);

    Dijkstra(pathMap);
    Floyd(pathMap);

    cout << dynamic::GetCoins(101)<<'\n';
    return 0;
}

