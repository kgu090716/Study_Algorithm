#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int input;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> input;
        if(binary_search(v.begin(), v.end(), input))
            cout << "1 ";
        else
            cout << "0 ";
    }
    return 0;
}