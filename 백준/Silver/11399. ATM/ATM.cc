#include <bits/stdc++.h>
using namespace std;
vector <int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int input;
    int sum = 0, res = 0;
    cin >> n;
    while(n--)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    for(auto a:v)
    {
        sum += a;
        res += sum;
    }
    cout << res << '\n';
    return 0;
}