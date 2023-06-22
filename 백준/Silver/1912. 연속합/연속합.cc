#include <bits/stdc++.h>
using namespace std;
int D[100002];
int A[100002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    int Max;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> A[i];
        D[i] = A[i];
    }
    for (int i = 1; i <= t; i++)
        D[i] = max(D[i - 1] + A[i], A[i]);
    Max = D[1];
    for (int i = 1; i <= t; i++)
    {
        Max = Max < D[i] ? D[i] : Max;
    }
    cout << Max << '\n';
    return 0;
}