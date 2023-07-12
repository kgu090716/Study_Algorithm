#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        while(n % i == 0)
        {
            n /= i;
            v.push_back(i);
        }
    }
    if(n != 1)
        v.push_back(n);
    for(auto a : v)
        cout << a << '\n';
    return 0;
}