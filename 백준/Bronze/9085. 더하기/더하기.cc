#include <bits/stdc++.h>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    int sum;
    int input;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> n;
        for(int j = 0; j < n; j++)
        {
            cin >> input;
            sum+= input;
        }
        cout << sum << '\n';
    }
    return 0;
}