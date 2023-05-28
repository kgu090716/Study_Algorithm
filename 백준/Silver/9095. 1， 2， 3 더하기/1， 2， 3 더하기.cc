#include <bits/stdc++.h>
using namespace std;
int D[12];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    D[1] = 1;
    D[2] = 2;
    D[3] = 4;
    for(int i = 4; i < 11; i++)
    {
        D[i] = D[i-1] + D[i-2] + D[i-3];
    }
    int n, t;
    cin >> t;
    for(int i = 0; i <t; i++)
    {
        cin >> n;
        cout << D[n] << '\n';
    }
    return 0;
}