#include <bits/stdc++.h>
using namespace std;
int A[1000002];

bool solve(int mid, int m, int n)
{
    int res=0;
    for(int i= 0; i < n; i++)
    {
        res += A[i] / mid;
    }
    return res >= m;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int st = 0;
    int en = 1000000000;
    int mid;
    while(st < en)
    {
        mid = (st + en + 1) / 2;
        if(solve(mid, m, n))
            st = mid;
        else
            en = mid-1;
    }
    cout << st << '\n';
    return 0;
}