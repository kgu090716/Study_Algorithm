#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b)
{
    return (a + b) * (a - b);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << '\n';
}