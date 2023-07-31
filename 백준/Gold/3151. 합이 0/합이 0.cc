#include <bits/stdc++.h>
using namespace std;
int A[10002];
vector <int> v;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> A[i];
    sort(A, A+n);
    long long cnt = 0;
    for(int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++)
        {
            auto u = upper_bound(A+j+1, A+n, -(A[i]+A[j])) - lower_bound(A+j+1, A+n, -(A[i]+A[j])); 
            cnt += u;
        } 
    }
    cout << cnt << '\n';
    return 0;
}