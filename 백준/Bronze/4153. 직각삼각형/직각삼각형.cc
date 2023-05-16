#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        else
        {
            if (a >= b && a >= c)
                if (a * a == b * b + c * c)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            else if (b >= a && b >= c)

                if (b * b == a * a + c * c)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            else
            {
                if (c * c == a * a + b * b)
                    cout << "right" << '\n';
                else
                    cout << "wrong" << '\n';
            }
        }
    }
    return 0;
}