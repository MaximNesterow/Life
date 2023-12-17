#include <iostream>
using namespace std;
int
main ()
{
    int a, b, i, j;
    cin >> a >> b;
    int c[a][b], d[a][b];
    for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
    cin >> c[i][j];
    for (i = 0; i < a; i++)
    {
        cout << endl;
        for (j = 0; j < b; j++)
        cout << c[i][j] << " ";
    }
    cout << endl;
    for (int z = 0; z < 10; z++)
    {
        if (c[1][0] + c[0][1] + c[1][1] > 1 & c[1][0] + c[0][1] + c[1][1] < 4)
        d[0][0] = 1;
        else
        d[0][0] = 0;
        if (c[0][b - 2] + c[1][b - 2] + c[1][b - 1] > 1 & c[0][b - 2] + c[1][b - 2] + c[1][b - 1] < 4)
        d[0][b - 1] = 1;
        else
        d[0][b - 1] = 0;
        if (c[a - 2][0] + c[a - 2][1] + c[a - 1][1] > 1 & c[a - 2][0] + c[a - 2][1] + c[a - 1][1] < 4)
        d[a - 1][0] = 1;
        else
        d[a - 1][0] = 0;
        if (c[a - 2][b - 2] + c[a - 1][b - 2] + c[a - 2][b - 1] > 1 & c[a - 2][b - 2] + c[a - 1][b - 2] + c[a - 2][b - 1] < 4)
        d[a - 1][b - 1] = 1;
        else
        d[a - 1][b - 1] = 0;
        for (i = 1; i < (a - 1); i++)
        for (j = 1; j < (b - 1); j++)
        {
            if (c[i - 1][j - 1] + c[i - 1][j] + c[i - 1][j + 1] + c[i][j - 1] + c[i][j + 1] + c[i + 1][j - 1] + c[i + 1][j] + c[i + 1][j + 1] > 1 & c[i - 1][j - 1] + c[i - 1][j] + c[i - 1][j + 1] + c[i][j - 1] + c[i][j + 1] + c[i + 1][j - 1] + c[i + 1][j] + c[i + 1][j + 1] < 4)
            d[i][j] = 1;
            else
            d[i][j] = 0;
        }
        for (j = 1; j < (b - 1); j++)
        if (c[1][j - 1] + c[1][j] + c[1][j + 1] + c[0][j - 1] + c[0][j + 1] > 1 & c[1][j - 1] + c[1][j] + c[1][j + 1] + c[0][j - 1] + c[0][j + 1] < 4)
        d[0][j] = 1;
        else
        d[0][j] = 0;
        for (j = 1; j < (b - 1); j++)
        if (c[a - 2][j - 1] + c[a - 2][j] + c[a - 2][j + 1] + c[a - 1][j - 1] + c[a - 1][j + 1] > 1 & c[a - 2][j - 1] + c[a - 2][j] + c[a - 2][j + 1] + c[a - 1][j - 1] + c[a - 1][j + 1] < 4)
        d[a - 1][j] = 1;
        else
        d[a - 1][j] = 0;
        for (i = 1; i < (a - 1); i++)
        if (c[i - 1][0] + c[i + 1][0] + c[i - 1][1] + c[i][1] + c[i + 1][1] > 1 & c[i - 1][0] + c[i + 1][0] + c[i - 1][1] + c[i][1] + c[i + 1][1] < 4)
        d[i][0] = 1;
        else
        d[i][0] = 0;
        for (i = 1; i < (a - 1); i++)
        if (c[i - 1][b - 1] + c[i + 1][b - 1] + c[i - 1][b - 2] + c[i][b - 2] + c[i + 1][b - 2] > 1 & c[i - 1][b - 1] + c[i + 1][b - 1] + c[i - 1][b - 2] + c[i][b - 2] + c[i + 1][b - 2] < 4)
        d[i][b - 1] = 1;
        else
        d[i][b - 1] = 0;
        for (i = 0; i < a; i++)
        {
            cout << endl;
            for (j = 0; j < b; j++)
            cout << d[i][j] << " ";
        }
        cout << endl;
        for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
        {
            c[i][j] = d[i][j];
        }
    }
    return 0;
}
