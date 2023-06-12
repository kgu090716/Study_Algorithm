#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> v;
    int input;
    for(int i = 0; i < 3; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cout << v[1] << '\n';
    return 0;
}