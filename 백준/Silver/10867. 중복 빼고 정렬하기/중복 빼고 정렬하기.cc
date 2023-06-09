#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n;
    int input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end()); 
    v.erase(unique(v.begin(), v.end()), v.end());
    for(auto a : v)
        cout << a << ' ';
    cout << '\n';
    return 0;
}