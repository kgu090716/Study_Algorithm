#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

int lcm(int a, int b)
{
    return a / gcd(a,b) * b;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int m, n, x, y;
    cin >> t;
    while(t--)
    {
        cin >> m >> n >> x >> y;
        bool tf = 1;
        int MAX = lcm(m,n);
        if(m == x)
            x = 0;
        if(n == y)
            y = 0;
        for(int i = x; i <= MAX; i += m)
        {
            if(i == 0)
                continue;
            if(i % n == y)
            {
                cout << i << '\n';
                tf = 0;
                break;
            }
        }
        if(tf)
            cout << "-1" << '\n';
    }
    return 0;
}