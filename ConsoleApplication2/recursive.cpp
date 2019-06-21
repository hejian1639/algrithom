// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <vector>
#include "utility.h"

using namespace std;




vector<int> GetCoins(int value)
{
    if (value == 1)
    {
        return vector<int>(1, 1);
    }
    if (value == 3)
    {
        return vector<int>(1, 3);

    }
    if (value == 5)
    {
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
            return v5;
        }
        v3.push_back(3);
        return v3;
    }
    if (v1.size() > v5.size())
    {
        v5.push_back(5);
        return v5;
    }
    v1.push_back(1);
    return v1;
}


