#include <bits/stdc++.h>
using namespace std;
int D[100002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    D[1] = -1; D[2] = 1; D[3] = -1; D[4] = 2; D[5] = 1;
    cin >> n; 
    for(int i = 6; i <= n; i++)
    {
        if(i % 5 == 0)
            D[i] = i/5;
        else
            D[i] = D[i-2] + 1;
    }
    cout << D[n] << '\n';
    return 0;
}