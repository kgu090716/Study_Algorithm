#include <bits/stdc++.h>
using namespace std;
unsigned long long gcd(unsigned long long n1, unsigned long long n2)
{
    unsigned long long n3;
    while (n2 != 0)
    {
        n3 = n1 % n2;
        n1 = n2;
        n2 = n3;
    }
    return n1;
}

unsigned long long lcm(unsigned long long n1, unsigned long long n2)
{
    return n1 * n2 / gcd(n1, n2);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        unsigned long long a, b;
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}