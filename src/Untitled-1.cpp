#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int missnum1 = 0;
    int missnum2 = 0;
    int missnum3 = 0;
    int missnum4 = 0;
    int mat[3][3];
    int t;
    cin >> t;
    int k = 1;
    while (k <= t)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 1 && j == 1)
                {
                    continue;
                }
                cin >> mat[i][j];
            }
        }

        if (2 * mat[0][1] == mat[0][0] + mat[0][2])
        {
            ans += 1;
        }
        if (2 * mat[2][1] == mat[2][0] + mat[2][2])
        {
            ans += 1;
        }
        if (2 * mat[1][0] == mat[0][0] + mat[2][0])
        {
            ans += 1;
        }
        if (2 * mat[1][2] == mat[0][2] + mat[2][2])
        {
            ans += 1;
        }
        if ((mat[1][0] + mat[1][2]) % 2 == 0)
        {
            missnum1 = (mat[1][0] + mat[1][2]) / 2;
        }
        if ((mat[0][1] + mat[2][1]) % 2 == 0)
        {
            missnum2 = (mat[0][1] + mat[2][1]) / 2;
        }
        if ((mat[0][0] + mat[2][2]) % 2 == 0)
        {
            missnum3 = (mat[0][0] + mat[2][2]) / 2;
        }
        if ((mat[0][2] + mat[2][0]) % 2 == 0)
        {
            missnum4 = (mat[0][2] + mat[2][0]) / 2;
        }
        if (missnum1 == 0 && missnum2 == 0)
        {
            ans += 0;
        }
        else if (missnum1 == missnum2)
        {
            ans += 2;
            if (missnum1 == missnum3 && missnum1 != missnum4)
            {
                ans += 1;
            }
            else if (missnum1 == missnum4 && missnum1 == missnum3)
            {
                ans += 2;
            }
            else if (missnum1 == missnum4 && missnum1 != missnum3)
            {
                ans += 1;
            }
            else if (missnum3 == missnum4)
            {
                ans += 2;
            }
            else
            {
                ans += 1;
            }
        }
        else
        {
            if (missnum1 == missnum3 && missnum1 != missnum4)
            {
                ans += 2;
            }
            else if (missnum1 == missnum4 && missnum1 == missnum3)
            {
                ans += 3;
            }
            else if (missnum1 == missnum4 && missnum1 != missnum3)
            {
                ans += 2;
            }
            if (missnum2 == missnum3 && missnum2 != missnum4)
            {
                ans += 2;
            }
            else if (missnum2 == missnum4 && missnum2 == missnum3)
            {
                ans += 3;
            }
            else if (missnum2 == missnum4 && missnum2 != missnum3)
            {
                ans += 2;
            }
            else if (missnum4 == missnum3)
            {
                ans += 2;
            }
            else
            {
                ans += 1;
            }
        }
        k++;
        cout << ans << "\n";
    }
    return 0;
}