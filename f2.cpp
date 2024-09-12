#include <iostream>

#include <cmath>

using namespace std;

int main()
{

    char s;
    int v;
    int i, x, k;

    cin >> v;

    if (v < 0)
    {
        exit(0);
    }

    cin >> s;

    cout << "1.  " << endl;

    for (i = 0; i < v; i++) {
        for (x = (i + 1); x > 0; x--) {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = v; i > 0; i--)
    {
        for (x = i; x > 0; x--)
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = v; i > 0; i--)
    {
        for (x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (k = v - i; k > 0; k--)
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < v; i++)
    {
        for (x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (k = v - i; k > 0; k--)
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    cout << " 2.  " << endl;

    i = 0;
    while (i < v)
    {
        x = i + 1;
        while (x > 0)
        {
            cout << s;
            x--;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    i = v;
    while (i > 0)
    {
        x = i;
        while (x > 0)
        {
            cout << s;
            x--;
        }
        cout << endl;
        i--;
    }

    i = 0;
    while (i <= v)
    {
        k = i;
        x = v - k;
        while (k < v)
        {
            cout << " ";
            k++;
        }
        while (x < v) {
            cout << s;
            x++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    i = v;
    while (i >= 0)
    {
        k = i;
        x = v - k;
        while (k < v)
        {
            cout << " ";
            k++;
        }
        while (x < v)
        {
            cout << s;
            x++;
        }
        cout << endl;
        i--;
    }

    return 0;
}