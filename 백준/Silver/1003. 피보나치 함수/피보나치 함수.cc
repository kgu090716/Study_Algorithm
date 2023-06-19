#include <bits/stdc++.h>
using namespace std;
int D[42][2];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int input;
    cin >> t;
    D[0][0] = 1; D[0][1] = 0; D[1][0] = 0; D[1][1] = 1;
    for(int i = 2; i <= 40; i++)
    {
        D[i][0] = D[i-2][0] + D[i-1][0];
        D[i][1] = D[i-2][1] + D[i-1][1];
    }
    for(int i = 0; i < t; i++)
    {
        cin >> input;
        cout << D[input][0] << ' ' << D[input][1] << '\n';
    }
    return 0;
}