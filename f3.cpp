﻿#include <iostream>

#include <cmath>

using namespace std;


int main()
{
    int num;

    cin >> num;

    while (num > 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num *= 3;
            num += 1;
            num /= 2;
        }
        cout << num << endl;
    }