#include <iostream>

#include <math.h>

using namespace std;

int calculate(int h)
{
    int i;
    int x = 1;
    for (i = 1; i <= h; i++)
    {
        x *= i;
    };

    return x;
}

int main()
{
    int r, x, y;
    int t = 0;

    cin >> r; //количество

    cout << "1" << endl;
    for (x = 1; x <= r; x++)
    {
        for (y = 0; y <= x; y++)
        {
            cout << (calculate(x) / (calculate(y) * calculate(x - y))) << " ";

        }

        cout << " " << endl;
    }
    return 0;
}