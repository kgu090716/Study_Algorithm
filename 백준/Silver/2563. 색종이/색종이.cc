#include <bits/stdc++.h>
using namespace std;
bool A[102][102];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int x, y;
    int cnt = 0;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        for(int i = x; i < x+10; i++)
        {
            for(int j = y; j < y+10; j++)
            {
                A[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 100; j++)
        {
            if(A[i][j])
                cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}