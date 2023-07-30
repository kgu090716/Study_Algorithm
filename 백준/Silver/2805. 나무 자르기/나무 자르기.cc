#include <bits/stdc++.h>
using namespace std;
int A[1000002];
int n, m;

bool solve(int mid)
{
    long long res = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] >= mid)
            res += A[i] - mid;
    }
    return res >= m;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int st = 0;
    int en = 1000000000;
    while(st < en)
    {
        int mid = (st+en+1) / 2;
        if(solve(mid))
            st = mid;
        else
            en = mid - 1;
    }
    cout << st << '\n';
    return 0;
}