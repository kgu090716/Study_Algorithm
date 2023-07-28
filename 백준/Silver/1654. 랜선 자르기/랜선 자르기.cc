#include <bits/stdc++.h>
using namespace std;
int A[10002];

bool tf(int n, int target, int goal)
{
    int res = 0;
    for(int i = 0; i < n; i++)
        res += A[i] / target;
    return goal <= res;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k, n;
    cin >> k >> n;
    for(int i = 0; i < k; i++)
        cin >> A[i];
    long long st = 1;
    long long en = (1 << 31) - 1;
    while(st < en)
    {
        long long mid = (st+en+1)/2;
        if(tf(k, mid, n))
            st = mid;
        else
            en = mid-1;
    }
    cout << st;
    return 0;
}