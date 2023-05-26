#include <bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
    int n3;
    while(n2 != 0)
    {
        n3 = n1 % n2;
        n1 = n2;
        n2 = n3;
    }
    return n1;
}

int lcm(int n1, int n2)
{
    return n1* n2 / gcd(n1, n2);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << '\n';
    cout << lcm(a,b) << '\n';
    return 0;
}