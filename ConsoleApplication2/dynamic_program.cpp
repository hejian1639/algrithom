// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <vector>
#include "utility.h"
#include <map>

using namespace std;


namespace dynamic
{
    vector<int> GetCoins(int value)
    {
        static map<int, vector<int>> table;

        if (table.find(value) != table.end())
        {
            return table[value];
        }

        if (value == 1)
        {
            table[value] = vector<int>(1, 1);
            return vector<int>(1, 1);
        }
        if (value == 3)
        {
            table[value] = vector<int>(1, 3);
            return vector<int>(1, 3);

        }
        if (value == 5)
        {
            table[value] = vector<int>(1, 5);
            return vector<int>(1, 5);

        }

        vector<int> v1;
        if (value > 1)
        {
            v1 = GetCoins(value - 1);
        }

        vector<int> v3;
        if (value > 3)
        {
            v3 = GetCoins(value - 3);
        }
        else
        {
            v3 = vector<int>(10);

        }

        vector<int> v5;
        if (value > 5)
        {
            v5 = GetCoins(value - 5);
        }
        else
        {
            v5 = vector<int>(10);

        }


        if (v1.size() > v3.size())
        {
            if (v3.size() > v5.size())
            {
                v5.push_back(5);
                table[value] = v5;
                return v5;
            }
            v3.push_back(3);
            table[value] = v3;
            return v3;
        }
        if (v1.size() > v5.size())
        {
            v5.push_back(5);
            table[value] = v5;
            return v5;
        }
        v1.push_back(1);
        table[value] = v1;
        return v1;

    }

    void knapsack()
    {

    }
}


