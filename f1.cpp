#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    int index = 1;
    int t;

    cin >> rows;
    cin >> columns;

    cout << " 1.  " << endl;

    int** l = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        l[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            l[i][j] = index;
            index++;
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << l[i][j] << "\t";
        }

        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = columns - 1; j >= 0; j--)
        {
            cout << l[i][j] << "\t";
        }

        cout << endl;
    }

    cout << " 2.  " << endl;


    int** l2 = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        l2[i] = new int[columns];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            l2[i][j] = index;
            index++;
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << l2[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns / 2; j++)
        {
            t = l2[i][j];
            l2[i][j] = l2[i][columns - j - 1];
            l2[i][columns - j - 1] = t;
        }

    }
    cout << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << l2[i][j] << "\t";
        }
        cout << endl;
    }
}