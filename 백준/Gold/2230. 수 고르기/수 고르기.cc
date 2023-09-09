#include <bits/stdc++.h>
using namespace std;
int A[100002];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    int st = 0 , en = 0;
    int Min = 2000000002;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A+n);
    for(st = 0; st < n; st++)
    {
        while(en < n && A[en] - A[st] < m)
            en++;
        if(en == n)
            break;
        Min = min(Min, A[en]-A[st]);
    }
    cout << Min << '\n';
    return 0;
}