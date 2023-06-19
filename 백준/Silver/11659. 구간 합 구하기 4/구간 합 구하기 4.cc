#include <bits/stdc++.h>
using namespace std;
int D[100002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int start, end;
    int input;
    cin >> n >> m;
    D[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> input;
        D[i] = D[i-1] + input; 
    }
    for(int j = 0; j < m; j++)
    {
        cin >> start >> end;
        cout << D[end] - D[start-1] << '\n';
    }
    return 0;
}