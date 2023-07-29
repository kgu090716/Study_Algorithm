#include <bits/stdc++.h>
using namespace std;
long long D[102];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int a;
    D[1] = 1; D[2] = 1; D[3] = 1; D[4] = 2; D[5] = 2;
    D[6] = 3; D[7] = 4; D[8] = 5; D[9] = 7; D[10] = 9;
    for(int i = 11; i <= 100; i++)
        D[i] = D[i-5] + D[i-1];
    cin >> t;
    while(t--)
    {
        cin >> a;
        cout << D[a] << '\n';
    }
    return 0;
}